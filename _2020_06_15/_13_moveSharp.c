#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no Ŀ��

	int x = 0, y = 0; // ��ǥ��
	int dirX = 1, dirY = 1; // �� 1, �� -1 // ��ȭ��(����)
	while (1)
	{
		
		//clrscr(); //ȭ�� û��
		gotoxy(x, y);
		puts("#");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		//x�� ��輱�� ������ x�� ��ȭ
		if (x == 80 || x == 0)
			dirX *= -1;
		if (y == 25||y == 0)
			dirY *= -1;
		//y�� ��輱�� ������ y�� ��ȭ

	}

}