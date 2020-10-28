//random하게 80 * 25안의 임의의 위치에 100개의 별이 생성되고
//역순으로 지워지는 프로그램
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define random(n) (rand() % (n))

void gotoxy(int x, int y);

int main(void)
{
	int i;
	int ar[2][100];

	srand(time(NULL));

	system("cls");

	for (i = 0; i < 100; i++) {
		ar[0][i] = random(80);
		ar[1][i] = random(25);

		gotoxy(ar[0][i], ar[1][i]);
		putchar('*');
		Sleep(50);
	}

	Sleep(50);

	for (i = 0; i < 100; i++) {
		gotoxy(ar[0][i], ar[1][i]);
		putchar(' ');
		Sleep(50);
	}

	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


