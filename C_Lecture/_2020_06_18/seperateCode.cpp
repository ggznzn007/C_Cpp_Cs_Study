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