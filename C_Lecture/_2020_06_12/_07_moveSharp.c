#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR); // no Ŀ��

	int x = 0;
	for (x = 0; x <= 80; x++)
	{
		clrscr(); //ȭ�� û��
		gotoxy(0, 0);
		puts("#");
		delay(100);
	}
	
	printf("�����մϴ�\n");

}