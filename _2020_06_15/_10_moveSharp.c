#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no Ŀ��

	int x = 0;
	int y = 0;
		for (x = 0; x <= 80; x++)
		{
			clrscr(); //ȭ�� û��
			gotoxy(x, 0);
			puts("#");
			delay(10);
			gotoxy(x, 1);
			puts(" ");
			if (x == 80)
				x = 0;
		}



}