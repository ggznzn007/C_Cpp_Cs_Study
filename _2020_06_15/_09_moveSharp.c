#include "turboc.h"



//void main()
//{
//	setcursortype(NOCURSOR); // no 커서
//	int x = 0, y = 0;
//	while(1)
//	for (x,y =(0,0);( x,y) <= (80, 80); x++,y++)
//	{
//		if (x, y == (80, 80)) {
//			for (x, y = (80, 80); (x, y) >(0, 0); x--, y--) {
//				clrscr(); //화면 청소
//				gotoxy(x, y); 
//				puts("●");
//				delay(1);
//				puts(" ");
//			}
//		}
//		clrscr(); //화면 청소
//		gotoxy(x, y);
//		puts("●");
//		delay(1);
//		puts(" ");
//	}
//
//}


	


void main()// 숙제 2번
{
	setcursortype(NOCURSOR); // no 커서
	int x = 0;
	int y = 0;
	while (1) // == for(;;)
		for (x = 0; x <= 80; x++) {
			if (x == 80)
				for (y = 80; y > 0; y--) {
					clrscr(); //화면 청소
					gotoxy(y, 12);
					puts("#");
					delay(1);
					puts(" ");

				}
			clrscr(); //화면 청소
			gotoxy(x, 12);
			puts("#");
			delay(1);
			puts(" ");
		}


}

//void main()// 숙제 1번 // 끝에 닿으면
//{
//	setcursortype(NOCURSOR); // no 커서
//
//	int x = 0;
//	int y = 0;
//			for (x = 0; x <= 80; x++)
//			for (y = 0; y <=80; y++)
//			{
//			clrscr(); //화면 청소
//			gotoxy(x, 2);
//			gotoxy(y, 12);
//			puts("#");
//			delay(1);
//			puts(" ");
//			if (x == 80)
//			x = 0;
//		}
//
//
//
//}

//void main() // 숙제 1번
//{
//	setcursortype(NOCURSOR); // no 커서
//
//	int x = 0;
//	int y = 0;
//	while (1)
//		for (x = 0; x <= 80; x++)
//		{
//			clrscr(); //화면 청소
//			gotoxy(x, 0);
//			puts("#");
//			delay(10);
//			gotoxy(x, 1);
//			puts(" ");
//		}
//
//
//
//}


//void main() // 강사님 답
//{
//	setcursortype(NOCURSOR); // no 커서
//
//	int x = 0;
//	int y = 0;
//	for (x = 0; x <= 80; x++)
//	{
//		clrscr(); //화면 청소
//		gotoxy(x, 0);
//		puts("#");
//		delay(10);
//		gotoxy(x, 1);
//		puts(" ");
//		if (x == 80)
//			x = 0;
//	}
//
//
//
//}