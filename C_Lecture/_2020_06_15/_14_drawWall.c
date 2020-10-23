#include "turboc.h"

void main() // 
{
	clrscr(); //화면 청소
	setcursortype(NOCURSOR); // no 커서
	int x = 0, y = 0; // 좌표값

	for (x = 0; x <= 40; x++) {
		gotoxy(x, 24);
		puts("■");
	}
	for (y = 0; y <= 25; y++) {
		gotoxy(79, y);
		puts("■");
	}

	
	
}