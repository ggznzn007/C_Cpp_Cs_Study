#include "turboc.h"
/// <summary>
/// 
/// </summary>
/// <param name="gaolVal">0부터 goalVal까지 변화</param>
/// <param name="any">0이면 x축 변화, 1이면 y축 변화</param>
/// <param name="pt">x축이 변하면 y축기준, y축이 변하면 x축기준</param>
/// <param name="icon">그릴 icon모양</param>
void drawWall(int gaolVal, int any, int pt, char*icon) 
{
	int x = 0,
		y = 0;
	for (x = 0; x <= gaolVal; x++)
	{
		if(any ==0)
			gotoxy(x, pt);
		else if (any==1)
			gotoxy(pt, y);

		puts(icon);
	}
}

void main() // 
{
	clrscr(); //화면 청소
	setcursortype(NOCURSOR); // no 커서

	drawWall(80 / 2, 0, 24, "♥");//가로축
	drawWall(25 ,1, 79, "♥");//세로축



}