#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no 커서

	int x = 0, y = 0; // 좌표값
	int dirX = 1, dirY = 1; // 우 1, 좌 -1 // 변화값(증감)
	while (1)
	{
		
		//clrscr(); //화면 청소
		gotoxy(x, y);
		puts("#");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		//x의 경계선에 닿으면 x의 변화
		if (x == 80 || x == 0)
			dirX *= -1;
		if (y == 25||y == 0)
			dirY *= -1;
		//y의 경계선에 닿으면 y의 변화

	}

}