#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no Ŀ��

	int x = 0;
	int dir = 1; // �� 1, �� -1
	while (1)
	{

		clrscr(); //ȭ�� û��
		gotoxy(x, 0);
		puts("#");
		delay(1);
		gotoxy(x, 1);
		puts(" ");
		x += dir;
		// �糡�� ������ ��ȣ�� �ٲ��
		// ��ȣ���� = ���� ���� ��ȣ��ȯ
		if (x == 80|| x==0)
			dir = dir*-1;// dir*=-1;
		
		
	}

}