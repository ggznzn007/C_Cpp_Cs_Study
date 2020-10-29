#include "turboc.h"
/// <summary>
/// 
/// </summary>
/// <param name="gaolVal">0부터 goalVal까지 변화</param>
/// <param name="any">0이면 x축 변화, 1이면 y축 변화</param>
/// <param name="pt">x축이 변하면 y축기준, y축이 변하면 x축기준</param>
/// <param name="icon">그릴 icon모양</param>
void drawWall(int gaolVal, int any, int pt, const char* icon)
{
	int x = 0,
		y = 0;
	for (x = 0; x <= gaolVal; x++)
	{
		if (any == 0)
			gotoxy(x, pt);
		else if (any == 1)
			gotoxy(pt, y);

		puts(icon);
	}
}

void main() // 
{
	int width = 80;
	int height = 25;
	clrscr(); //화면 청소
	setcursortype(NOCURSOR); // no 커서

	drawWall(width / 2, 0, height+1, "▦");//가로축
	drawWall(height, 1, width+2, "▦");//세로축
	// moveSharp 코드 삽입
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
		if (x == width || x == 0)
		{
			dirX *= -1;
		}
		if (y == height || y == 0)
		{
			dirY *= -1;
		}
		//y의 경계선에 닿으면 y의 변화
}


}



