#include "BBQ.h"
BBQ::BBQ() {
	this->storeName = "BBQ";
	this->menu[0].foodName = "황금올리브";
	this->menu[0].foodPrice = 18000;
	this->menu[1].foodName = "양념치킨";
	this->menu[1].foodPrice = 19000;
	this->menu[2].foodName = "레드착착";
	this->menu[2].foodPrice = 19000;
	this->menu[3].foodName = "블랙페퍼";
	this->menu[3].foodPrice = 19000;
	this->menu[4].foodName = "콤보반반";
	this->menu[4].foodPrice = 19000;
}
void BBQ::showWelcom() {
	setcolor(0x0001, 0);
	cout << "어서오세요! '" << storeName << "'입니다!";
	setcolor(0x000f, 0);
}
void BBQ::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' 후다닭 튀기는 중..." << endl;
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
								else puts(" ");
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
					gotoxy(40, startY + 3);
					setcolor(0x000c, 0);
					puts("치킨");
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
void BBQ::delivery() {
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	setcolor(0x000b, 0);
	cout << "'" << this->address << "'에 후다닭 배달 중..." << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	setcolor(0x0009, 0);
	cout << "*** 배달 완료닭! ***" << endl;
	setcolor(0x000f, 0);
	Sleep(3000);
}
