#include "turboc.h"
/// <summary>
/// 
/// </summary>
/// <param name="gaolVal">0���� goalVal���� ��ȭ</param>
/// <param name="any">0�̸� x�� ��ȭ, 1�̸� y�� ��ȭ</param>
/// <param name="pt">x���� ���ϸ� y�����, y���� ���ϸ� x�����</param>
/// <param name="icon">�׸� icon���</param>

void drawWall(int gaolVal, int any, int pt,const char* icon)
{
	int i = 0;
	for (i = 0; i <= gaolVal; i++)
	{
		if (any == 0)
			gotoxy(i, pt);
		else if (any == 1)
			gotoxy(pt, i);

		puts(icon);
	}
}

void main() // 
{
	clrscr(); //ȭ�� û��
	setcursortype(NOCURSOR); // no Ŀ��

	drawWall(84 / 2, 0, 27, "��");//������
	drawWall(27, 1, 83, "��");//������
	// moveSharp �ڵ� ����
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
		if (y == 25 || y == 0)
			dirY *= -1;
		//y�� ��輱�� ������ y�� ��ȭ

	}
}




