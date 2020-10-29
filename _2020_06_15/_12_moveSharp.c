#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no 커서

	int x = 0;
	int dir = 1; // 우 1, 좌 -1
	while (1)
	{

		clrscr(); //화면 청소
		gotoxy(x, 0);
		puts("#");
		delay(1);
		gotoxy(x, 1);
		puts(" ");
		x += dir;
		// 양끝에 닿으면 부호를 바꿔라
		// 부호변경 = 증가 감소 상호교환
		if (x == 80|| x==0)
			dir = dir*-1;// dir*=-1;
		
		
	}

}