#include "turboc.h"
#include <conio.h>

#define WIDTH   45
#define HEIGHT   40

#define TRUE   1
#define FALSE   0

#define UP_KEY 72
#define DOWN_KEY 80
#define LEFT_KEY 75
#define RIGHT_KEY 77

int obStartX[] = { 38, 40, 57, 63, 54 };
int obStartY[] = { 38, 50, 35, 46, 54 };
int obWidth[] = { 4, 6, 12, 4, 12 };
int obHieght[] = { 4, 6, 6, 4, 4 };
int obScore[] = { 3, 2, 1, 3, 2 };


int scores[500] = { 0 };
int score_cnt = 0;
int score = 0;


void check_game_over(void);
void check_score(void);
void loadScore();
void saveScore();


void drawXLine(int sX, int eX, int yPos, const char* icon)
{
    int x = 0;
    for (x = sX; x <= eX; x++)
    {
        gotoxy(x, yPos);
        puts(icon);
    }
}

void drawYLine(int sY, int eY, int xPos, const char* icon)
{
    int y = 0;
    for (y = sY; y <= eY; y++)
    {
        gotoxy(xPos, y);
        puts(icon);
    }
}

void drawBar(int x, int y, char* bar)
{
    gotoxy(x, y);
    puts(bar);
}
void drawWall(int start, int end, int any, int pt, char* icon) {

    for (int i = start; i <= end; i++) {

        if (any == 0) {
            gotoxy(i, pt);
        }
        else if (any == 1) {
            gotoxy(pt, i);
        }

        puts(icon);
    }
}

void drawObs() {
    for (int i = 0; i < sizeof(obStartX) / sizeof(int); i++) {
        drawWall(obStartX[i], obStartX[i] + obWidth[i], 0, obStartY[i], "#");
        drawWall(obStartX[i], obStartX[i] + obWidth[i], 0, obStartY[i] + obHieght[i], "#");
        drawWall(obStartY[i], obStartY[i] + obHieght[i], 1, obStartX[i], "#");
        drawWall(obStartY[i], obStartY[i] + obHieght[i], 1, obStartX[i] + obWidth[i], "#");
        gotoxy(obStartX[i] + obWidth[i] / 2, obStartY[i] + obHieght[i] / 2);
        printf("%d", obScore[i]);
    }

}


int obXBouncce(int x, int y) {
    for (int i = 0; i < sizeof(obStartX) / sizeof(int); i++) {
        if ((x == obStartX[i] - 1 || x == obStartX[i] + obWidth[i] + 1) && y >= obStartY[i] && y <= obStartY[i] + obHieght[i]) {
            score += obScore[i];
            return -1;
        }
    }
    return 1;
}
int obYBouncce(int x, int y) {
    for (int i = 0; i < sizeof(obStartX) / sizeof(int); i++) {
        if ((y == obStartY[i] - 1 || y == obStartY[i] + obHieght[i] + 1) && x >= obStartX[i] && x <= obStartX[i] + obWidth[i]) {
            score += obScore[i];
            return -1;
        }
    }
    return 1;
}



void drawMap() {
    drawXLine(2 + 30, WIDTH + 2 + 30, HEIGHT + 2 + 30, "*");
    drawXLine(2 + 30, WIDTH + 2 + 30, 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, WIDTH + 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, 2 + 30, "*");

    drawObs();


}

void printScore() {
    gotoxy(81, 37);
    printf("score : %d", score);

}
void playGame() {

}
int gameOver() {
    int restart;
    gotoxy(90, 52);
    puts("game over");
    gotoxy(87, 54);
    puts("재도전 1, 종료 2");
    gotoxy(88, 56);
    printf("최종 점수 : %d\n", score);
    check_game_over();
    check_score();
    gotoxy(88, 58);
    puts("입력 >>                   ");
    gotoxy(96, 58);
    scanf_s("%d", &restart);
    getchar();
    gotoxy(90, 52);
    puts("           ");
    gotoxy(87, 54);
    puts("                    ");
    gotoxy(88, 56);
    puts("                    ");
    gotoxy(88, 58);
    puts("                    ");
    gotoxy(96, 58);
    puts("                    ");
    gotoxy(32, 31);
    puts("                     ");
    gotoxy(81, 37);
    puts("                     ");
    return restart;
}

void saveScore()
{
    FILE* fp = NULL;
    fopen_s(&fp, "score.bin", "ab");
    fwrite(scores, sizeof(int), 10, fp);
    fclose(fp);
}

void loadScore()
{
    FILE* fp = NULL;
    fopen_s(&fp, "score.bin", "rb");
    fread(scores, sizeof(int), sizeof(scores) / sizeof(int), fp);
    score_cnt = 10;
    int temp = 0;
    printf("\n\n\t<     점 수 판     >\n\n\n");
    for (int i = 0; i < sizeof(scores) / sizeof(int); i++)
    {
        for (int j = i+1; j < sizeof(scores) / sizeof(int); j++) {
            if (scores[j] > scores[i]) {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
    printf("     ☆★☆★☆★☆★☆★☆★☆\n");
    printf("     ★                      ★\n");
    printf("     ☆      1등  :   %3d    ☆\n", scores[0]);
    printf("     ★                      ★\n");
    printf("     ☆★☆★☆★☆★☆★☆★☆\n\n");
    for (int i = 1; i < 10; i++)
    {
        if (i == 9) printf("\t|   %2d등 :  %3d   |\n", i + 1, scores[i]);
        else printf("\t|   %2d등 :  %3d   |\n\n", i + 1, scores[i]);


    }
    printf("\t_ _ _ _ _ _ _ _ _ _\n\n");
    //printf("\t-------------------\n\n");


    fclose(fp);

}

void check_game_over(void) {

    if (score_cnt == 10)
        return;

    scores[score_cnt] = score;
    score_cnt++;

}

void check_score(void)
{
    printf("------점수판--------\n\n");
    for (int i = 0; i < score_cnt; i++)
    {
        printf("Score : %d\n\n", scores[i]);
    }
}

void main()
{

    clrscr();
    setcursortype(NOCURSOR);
    char* bar = "■■■■";
    int preX, preY, newX, newY;
    preX = newX = WIDTH / 2 - strlen(bar) / 2 + 30;
    preY = newY = HEIGHT / 5 * 4 + 38;


    int x = 4 + 30, y = 3 + 30;
    int wayX = 1, wayY = 1;
    int speed = 0;
    int restart = 0;
    int isRun = 1;
    drawMap();
    drawBar(newX, newY, bar);


    while (isRun)
    {

        setcursortype(NOCURSOR);
        gotoxy(x, y);
        puts("o");
        delay(30);
        gotoxy(x, y);
        puts(" ");

        if (speed == 2) {
            if (wayX == 1) x++;
            else x--;
            if (wayY == 1) y++;
            else y--;
            if (x == 3 + 30 || x == WIDTH + 1 + 30) wayX *= -1;
            if (y == 3 + 30 || y == HEIGHT + 1 + 30 || (y == newY - 1 && x >= newX && x <= newX + 8)) wayY *= -1;

            wayX *= obXBouncce(x, y);
            wayY *= obYBouncce(x, y);


            printScore();
            speed = 0;
            if (y == HEIGHT / 5 * 4 + 38 + 1)
            {
                int restart = gameOver();
                if (restart == 1) {
                    x = 4 + 30, y = 3 + 30;
                    wayX = 1, wayY = 1;
                    speed = 0;
                    score = 0;
                    continue;
                }
                else if (restart == 2) {
                    clrscr();
                    saveScore();
                    loadScore();
                    break;
                }
            }
        }

        speed++;
        preX = newX;
        preY = newY;

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            if (newX > 3 + 30)
                newX--;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            if (newX < WIDTH + 24)
                newX++;
        }
        if (newX != preX || newY != preY)
            drawBar(preX, preY, "        ");
        drawBar(newX, newY, bar);
    }
}