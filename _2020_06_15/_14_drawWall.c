#include "turboc.h"

void main() // 
{
	clrscr(); //ȭ�� û��
	setcursortype(NOCURSOR); // no Ŀ��
	int x = 0, y = 0; // ��ǥ��

	for (x = 0; x <= 40; x++) {
		gotoxy(x, 24);
		puts("��");
	}
	for (y = 0; y <= 25; y++) {
		gotoxy(79, y);
		puts("��");
	}

	
	
}