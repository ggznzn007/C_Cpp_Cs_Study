#include "turboc.h"
/// <summary>
/// 
/// </summary>
/// <param name="gaolVal">0���� goalVal���� ��ȭ</param>
/// <param name="any">0�̸� x�� ��ȭ, 1�̸� y�� ��ȭ</param>
/// <param name="pt">x���� ���ϸ� y�����, y���� ���ϸ� x�����</param>
/// <param name="icon">�׸� icon���</param>
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
	clrscr(); //ȭ�� û��
	setcursortype(NOCURSOR); // no Ŀ��

	drawWall(width / 2, 0, height+1, "��");//������
	drawWall(height, 1, width+2, "��");//������
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
		if (x == width || x == 0)
		{
			dirX *= -1;
		}
		if (y == height || y == 0)
		{
			dirY *= -1;
		}
		//y�� ��輱�� ������ y�� ��ȭ
}


}



