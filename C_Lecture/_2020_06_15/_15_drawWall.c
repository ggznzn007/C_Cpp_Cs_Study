#include "turboc.h"
/// <summary>
/// 
/// </summary>
/// <param name="gaolVal">0���� goalVal���� ��ȭ</param>
/// <param name="any">0�̸� x�� ��ȭ, 1�̸� y�� ��ȭ</param>
/// <param name="pt">x���� ���ϸ� y�����, y���� ���ϸ� x�����</param>
/// <param name="icon">�׸� icon���</param>
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
	clrscr(); //ȭ�� û��
	setcursortype(NOCURSOR); // no Ŀ��

	drawWall(80 / 2, 0, 24, "��");//������
	drawWall(25 ,1, 79, "��");//������



}