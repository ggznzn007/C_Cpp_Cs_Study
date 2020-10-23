#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no 커서

	int x = 0;
	int y = 0;
		for (x = 0; x <= 80; x++)
		{
			clrscr(); //화면 청소
			gotoxy(x, 0);
			puts("#");
			delay(10);
			gotoxy(x, 1);
			puts(" ");
			if (x == 80)
				x = 0;
		}



}