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

int score = 0;

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

void drawObs(int left, int top, int width, int height) {
    drawWall(left, left + width, 0, top, "#");
    drawWall(left, left + width, 0, top + height, "#");
    drawWall(top, top + height, 1, left, "#");
    drawWall(top, top + height, 1, left + width, "#");
}

int obXBouncce(int x, int y, int left, int top, int width, int hieght, int sc) {
    if ((x == left - 1 || x == left + width + 1) && y >= top && y <= top + hieght) {
        score += sc;
        return -1;
    }
    else return 1;
}
int obYBouncce(int x, int y, int left, int top, int width, int hieght, int sc) {
    if ((y == top - 1 || y == top + hieght + 1) && x >= left && x <= left + width) {
        score += sc;
        return -1;
    }
    else return 1;
}

void main()
{
RE:
    clrscr();
    setcursortype(NOCURSOR);
    char* bar = "■■■■";
    int preX, preY;
    int newX, newY;
    preX = newX = WIDTH / 2 - strlen(bar) / 2 + 30;
    preY = newY = HEIGHT / 5 * 4 + 38;
    score = 0;
    int obL1 = 38;
    int obT1 = 38;
    int obW1 = 4;
    int obH1 = 4;

    int obL2 = 40;
    int obT2 = 50;
    int obW2 = 6;
    int obH2 = 6;

    int obL3 = 57;
    int obT3 = 35;
    int obW3 = 12;
    int obH3 = 6;

    int obL4 = 63;
    int obT4 = 46;
    int obW4 = 4;
    int obH4 = 4;

    int obL5 = 54;
    int obT5 = 54;
    int obW5 = 12;
    int obH5 = 4;


    gotoxy(40, 40);
    puts("3");
    gotoxy(43, 53);
    puts("2");
    gotoxy(63, 38);
    puts("1");
    gotoxy(65, 48);
    puts("3");
    gotoxy(60, 56);
    puts("2");

    drawXLine(2 + 30, WIDTH + 2 + 30, HEIGHT + 2 + 30, "*");
    drawXLine(2 + 30, WIDTH + 2 + 30, 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, WIDTH + 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, 2 + 30, "*");
    drawObs(obL1, obT1, obW1, obH1);
    drawObs(obL2, obT2, obW2, obH2);
    drawObs(obL3, obT3, obW3, obH3);
    drawObs(obL4, obT4, obW4, obH4);
    drawObs(obL5, obT5, obW5, obH5);
    /*drawObs(39, 42, 2, 2);
    drawObs(38, 38, 4, 4);
    drawObs(40, 45, 2, 2);*/
    drawBar(newX, newY, bar);

    int x = 4 + 30, y = 3 + 30;
    int wayX = 1, wayY = 1;
    int count = 0;
    int restart = 0;
    while (TRUE)
    {
    REGAME:
        setcursortype(NOCURSOR);
        gotoxy(x, y);
        puts("o");
        delay(25);
        gotoxy(x, y);
        puts(" ");

        if (count == 2) {
            if (wayX == 1) x++;
            else x--;
            if (wayY == 1) y++;
            else y--;
            if (x == 3 + 30 || x == WIDTH + 1 + 30) wayX *= -1;
            if (y == 3 + 30 || y == HEIGHT + 1 + 30 || (y == newY - 1 && x >= newX && x <= newX + 8)) wayY *= -1;
            //if ((x == obLeftX - 1 || x == obLeftX +5) && y >= obTopY && y <= obTopY + 4) wayX *= -1;
            //if ((y == obTopY -1 || y == obTopY +5) && x >= obLeftX && x <= obLeftX + 4) wayY *= -1;

            wayX *= obXBouncce(x, y, obL1, obT1, obW1, obH1, 3);
            wayY *= obYBouncce(x, y, obL1, obT1, obW1, obH1, 3);
            wayX *= obXBouncce(x, y, obL2, obT2, obW2, obH2, 2);
            wayY *= obYBouncce(x, y, obL2, obT2, obW2, obH2, 2);
            wayX *= obXBouncce(x, y, obL3, obT3, obW3, obH3, 1);
            wayY *= obYBouncce(x, y, obL3, obT3, obW3, obH3, 1);
            wayX *= obXBouncce(x, y, obL4, obT4, obW4, obH4, 3);
            wayY *= obYBouncce(x, y, obL4, obT4, obW4, obH4, 3);
            wayX *= obXBouncce(x, y, obL5, obT5, obW5, obH5, 2);
            wayY *= obYBouncce(x, y, obL5, obT5, obW5, obH5, 2);

            gotoxy(81, 37);
            printf("score : %d", score);
            count = 0;
            if (y == HEIGHT / 5 * 4 + 38 + 1)
            {
                gotoxy(90, 52);
                puts("game over");
                gotoxy(87, 54);
                puts("재도전 1, 종료 2");
                gotoxy(88, 56);
                printf("최종 점수 : %d\n", score);
                gotoxy(88, 58);
                puts("입력 >>                   ");
                gotoxy(96, 58);
                scanf_s("%d", &restart);
                _getch();

                if (restart == 1) {

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
                    score = 0;
                    gotoxy(32, 31);
                    puts("                     ");
                    gotoxy(81, 37);
                    puts("                     ");
                    
                    restart = 0;
                    x = 4 + 30, y = 3 + 30;
                    wayX = 1, wayY = 1;
                    count = 0;
                    continue;
                }
                else if (restart == 2) 
                    
                { break; }
                

            }
        }

        count++;
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