#include "turboc.h"

#define BOOL int
#define TRUE 1
#define FALSE 0

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PGUP 73
#define PGDN 81
#define ESC 27
#define BX 5
#define BY 1
#define BW 10
#define BH 20


void DrawScreen();
void DrawBoard();
BOOL ProcessKey();
void PrintBrick(BOOL Show);
int GetAround(int x, int y, int b, int r);
BOOL MoveDown();
void TestFull();
void DrawNext();
void PrintInfo();

struct Point {
	int x, y;
};
Point Shape[][4][4] = {
	{ {0,0,1,0,2,0,-1,0}, {0,0,0,1,0,-1,0,-2}, {0,0,1,0,2,0,-1,0}, {0,0,0,1,0,-1,0,-2} },
	{ {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1} },
	{ {0,0,-1,0,0,-1,1,-1}, {0,0,0,1,-1,0,-1,-1}, {0,0,-1,0,0,-1,1,-1}, {0,0,0,1,-1,0,-1,-1} },
	{ {0,0,-1,-1,0,-1,1,0}, {0,0,-1,0,-1,1,0,-1}, {0,0,-1,-1,0,-1,1,0}, {0,0,-1,0,-1,1,0,-1} },
	{ {0,0,-1,0,1,0,-1,-1}, {0,0,0,-1,0,1,-1,1}, {0,0,-1,0,1,0,1,1}, {0,0,0,-1,0,1,1,-1} },
	{ {0,0,1,0,-1,0,1,-1}, {0,0,0,1,0,-1,-1,-1}, {0,0,1,0,-1,0,-1,1}, {0,0,0,-1,0,1,1,1} },
	{ {0,0,-1,0,1,0,0,1}, {0,0,0,-1,0,1,1,0}, {0,0,-1,0,1,0,0,-1}, {0,0,-1,0,0,-1,0,1} },
	{ {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0} },
	{ {0,0,0,0,0,-1,1,0},{0,0,0,0,-1,0,0,-1},{0,0,0,0,0,1,-1,0},{0,0,0,0,0,1,1,0} },
};

enum { EMPTY, BRICK, WALL };
const char* arTile[][3] = {
	{". ","■","□"},
	{"  ","■","□"},
	{"  ","##","II"},
	{"  ","●","▣"},
};
int ttype = 0;
int board[BW + 2][BH + 2];
int nx, ny;
int brick, rot;
int nbrick;
int score;
int bricknum;

void main()
{
	int nFrame, nStay;
	int x, y;

	setcursortype(NOCURSOR);
	randomize();

	for (; 3;) {
		clrscr();
		for (x = 0; x < BW + 2; x++) {
			for (y = 0; y < BH + 2; y++) {
				board[x][y] = (y == 0 || y == BH + 1 || x == 0 || x == BW + 1) ? WALL : EMPTY;
			}
		}
		DrawScreen();
		nFrame = 20;
		score = 0;
		bricknum = 0;

		nbrick = random(sizeof(Shape) / sizeof(Shape[0]));
		for (; 1;) {
			bricknum++;
			brick = nbrick;
			nbrick = random(sizeof(Shape) / sizeof(Shape[0]));
			DrawNext();
			nx = BW / 2;
			ny = 3;
			rot = 0;
			PrintBrick(TRUE);

			if (GetAround(nx, ny, brick, rot) != EMPTY) break;
			nStay = nFrame;
			for (; 2;) {
				if (--nStay == 0) {
					nStay = nFrame;
					if (MoveDown()) break;
				}
				if (ProcessKey()) break;
				delay(1000 / 20);
			}
			if (bricknum % 10 == 0 && nFrame > 5) {
				nFrame--;
			}
		}
		clrscr();
		gotoxy(30, 12); puts("G A M E  O V E R");
		gotoxy(25, 14); puts("다시 시작하려면 Y를 누르세요");
		if (tolower(_getch()) != 'y') break;
	}
	setcursortype(NORMALCURSOR);
}

void DrawScreen()
{
	int x, y;

	for (x = 0; x < BW + 2; x++) {
		for (y = 0; y < BH + 2; y++) {
			gotoxy(BX + x * 2, BY + y);
			puts(arTile[ttype][board[x][y]]);
		}
	}

	gotoxy(50, 3); puts("Tetris Ver 1.1");
	gotoxy(50, 5); puts("좌우:이동, 위:회전, 아래:내림");
	gotoxy(50, 6); puts("공백:전부 내림, ESC:종료");
	gotoxy(50, 7); puts("P:정지, PgUp,PgDn:모양 바꿈");
	DrawNext();
	PrintInfo();
}

void DrawBoard()
{
	int x, y;

	for (x = 1; x < BW + 1; x++) {
		for (y = 1; y < BH + 1; y++) {
			gotoxy(BX + x * 2, BY + y);
			puts(arTile[ttype][board[x][y]]);
		}
	}
}

BOOL ProcessKey()
{
	int ch, trot;

	if (_kbhit()) {
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
			case LEFT:
				if (GetAround(nx - 1, ny, brick, rot) == EMPTY) {
					PrintBrick(FALSE);
					nx--;
					PrintBrick(TRUE);
				}
				break;
			case RIGHT:
				if (GetAround(nx + 1, ny, brick, rot) == EMPTY) {
					PrintBrick(FALSE);
					nx++;
					PrintBrick(TRUE);
				}
				break;
			case UP:
				trot = (rot == 3 ? 0 : rot + 1);
				if (GetAround(nx, ny, brick, trot) == EMPTY) {
					PrintBrick(FALSE);
					rot = trot;
					PrintBrick(TRUE);
				}
				break;
			case DOWN:
				if (MoveDown()) {
					return TRUE;
				}
				break;
			case PGDN:
				ttype++;
				if (ttype == sizeof(arTile) / sizeof(arTile[0])) ttype = 0;
				DrawScreen();
				PrintBrick(TRUE);
				break;
			case PGUP:
				if (ttype == 0) ttype = sizeof(arTile) / sizeof(arTile[0]);
				ttype--;
				DrawScreen();
				PrintBrick(TRUE);
				break;
			}
		}
		else {
			switch (tolower(ch)) {
			case ' ':
				while (MoveDown() == FALSE) { ; }
				return TRUE;
			case ESC:
				exit(0);
			case 'p':
				clrscr();
				gotoxy(15, 10);
				puts("Tetris 잠시 중지. 다시 시작하려면 아무 키나 누르세요.");
				_getch();
				clrscr();
				DrawScreen();
				PrintBrick(TRUE);
				break;
			}
		}
	}
	return FALSE;
}

void PrintBrick(BOOL Show)
{
	int i;

	for (i = 0; i < 4; i++) {
		gotoxy(BX + (Shape[brick][rot][i].x + nx) * 2, BY + Shape[brick][rot][i].y + ny);
		puts(arTile[ttype][Show ? BRICK : EMPTY]);
	}
}

int GetAround(int x, int y, int b, int r)
{
	int i, k = EMPTY;

	for (i = 0; i < 4; i++) {
		k = max(k, board[x + Shape[b][r][i].x][y + Shape[b][r][i].y]);
	}
	return k;
}

BOOL MoveDown()
{
	if (GetAround(nx, ny + 1, brick, rot) != EMPTY) {
		TestFull();
		return TRUE;
	}
	PrintBrick(FALSE);
	ny++;
	PrintBrick(TRUE);
	return FALSE;
}

void TestFull()
{
	int i, x, y, ty;
	int count = 0;
	static int arScoreInc[] = { 0,1,3,8,20 };

	for (i = 0; i < 4; i++) {
		board[nx + Shape[brick][rot][i].x][ny + Shape[brick][rot][i].y] = BRICK;
	}

	for (y = 1; y < BH + 1; y++) {
		for (x = 1; x < BW + 1; x++) {
			if (board[x][y] != BRICK) break;
		}
		if (x == BW + 1) {
			count++;
			for (ty = y; ty > 1; ty--) {
				for (x = 1; x < BW + 1; x++) {
					board[x][ty] = board[x][ty - 1];
				}
			}
			DrawBoard();
			delay(200);
		}
	}
	score += arScoreInc[count];
	PrintInfo();
}

void DrawNext()
{
	int x, y, i;

	for (x = 50; x <= 70; x += 2) {
		for (y = 12; y <= 18; y++) {
			gotoxy(x, y);
			puts(arTile[ttype][(x == 50 || x == 70 || y == 12 || y == 18) ? WALL : EMPTY]);
		}
	}

	for (i = 0; i < 4; i++) {
		gotoxy(60 + (Shape[nbrick][0][i].x) * 2, 15 + Shape[nbrick][0][i].y);
		puts(arTile[ttype][BRICK]);
	}
}

void PrintInfo()
{
	gotoxy(50, 9); printf("점수 : %d     ", score);
	gotoxy(50, 10); printf("벽돌 : %d 개  ", bricknum);
}

