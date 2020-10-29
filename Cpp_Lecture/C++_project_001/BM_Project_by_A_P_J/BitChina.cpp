#include "BitChina.h"
BitChina::BitChina()
{
	this->storeName = "비트중화식당";
	this->menu[0].foodName = "비틀어짜장";
	this->menu[0].foodPrice = 7000;
	this->menu[1].foodName = "너무매워짬뽕";
	this->menu[1].foodPrice = 7000;
	this->menu[2].foodName = "탕수육";
	this->menu[2].foodPrice = 12000;
	this->menu[3].foodName = "깐풍기";
	this->menu[3].foodPrice = 12000;
	this->menu[4].foodName = "짬짜면";
	this->menu[4].foodPrice = 7500;


}
void BitChina::showWelcom()
{
	setcolor(0x0006, 0);
	cout << "어서오세요! '" << this->storeName << "'입니다!";
	setcolor(0x000f, 0);
}
void BitChina::cooking()
{
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' 조리 중..." << endl;
				int startY = 14;
				for (int i = 0; i < 5; i++) {
					for (int x = 30; x < 55; x++) {
						for (int y = 15; y < 21; y++) {
							if (y == 16) {
								gotoxy(x, y);
								puts(".");
							}
							if (y == 20 && x < 43) {
								gotoxy(x + x % 30, y);
								puts("#");
							}
							if (x == 30 || x == 54) {
								gotoxy(x, y);
								puts("#");
							}

						}
					}
					for (int x = 35; x < 67; x++) {
						for (int y = startY; y < startY + 6; y++) {
							if (y == startY + 5 && x < 50) {
								gotoxy(x, y);
								if (x % 2 == 0) {
									puts("*");
								}
								else
									puts(" ");
							}
							if (x == 35 || x == 50) {
								gotoxy(x, y);
								setcolor(0x000e, 0);
								puts("*");
							}
							if (x > 50) {
								gotoxy(x, startY);
								puts("*");
								setcolor(0x000f, 0);
							}
						}
					}
					for (int x = 33; x < 67; x++) {
						for (int y = startY + 11; y < startY + 12; y++) {/*int y = startY+8; y < startY + 14; y++*/
							if (y == startY + 11 && x < 50) {
								gotoxy(x, y);
								setcolor(0x000c, 0);
								if (x % 2 == 0) {
									puts("$");
								}
								else if (x % 2 != 0)
								{
									for (int f = startY + 12; y > startY + 11; y--)
										puts("$");
								}
							}
							if (x == 33 || x == 50) {
								gotoxy(x, y);
								puts("$");
								setcolor(0x000f, 0);
							}

						}
					}
					gotoxy(37, startY + 1);
					setcolor(0x0006, 0);
					puts("~~~~~~~~~~~~");
					gotoxy(37, startY + 2);
					puts("~~~~~~~~~~~~");
					gotoxy(37, startY + 3);
					puts("~~~~~~~~~~~~");
					gotoxy(37, startY + 4);
					puts("~~~~~~~~~~~~");
					setcolor(0x000f, 0);

					Sleep(1000);
					gotoxy(40, startY + 3);
					puts("     ");
					for (int x = 35; x < 67; x++) {
						for (int y = startY; y < 20; y++) {
							if (y == startY + 5 && x < 51) {
								gotoxy(x, y);
								puts(" ");
							}
							if (x > 50) {
								gotoxy(x, startY);
								puts(" ");
							}
						}
					}
					--startY;
				}
			}
		}
	}
}
void BitChina::delivery()
{
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	setcolor(0x000d, 0);
	cout << "'" << this->address << "'에 오우 빠르게 배달 중..." << endl;
	setcolor(0x000f, 0);
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	setcolor(0x0004, 0);
	cout << "*** 배달 완료 째쟁쩀뽕! ***" << endl;
	setcolor(0x000f, 0);
	Sleep(3000);
}
