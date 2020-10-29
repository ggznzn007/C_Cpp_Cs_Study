#include "NeNe.h"

NeNe::NeNe() {
	this->storeName = "³×³×Ä¡Å²";
	this->menu[0].foodName = "ÈÄ¶óÀÌµå";
	this->menu[0].foodPrice = 15000;
	this->menu[1].foodName = "¾ç³äÄ¡Å²";
	this->menu[1].foodPrice = 16000;
	this->menu[2].foodName = "½º³ëÀ®Ä¡Áî";
	this->menu[2].foodPrice = 17000;
	this->menu[3].foodName = "¼îÅ·ÇÖ¾ç³ä";
	this->menu[3].foodPrice = 17000;
	this->menu[4].foodName = "¾çÆÄ´ß";
	this->menu[4].foodPrice = 18000;
}

void NeNe::showWelcom() {
	cout << "³×³× ¾È³çÇÏ¼¼¿ä~ '" << storeName << "'ÀÔ´Ï´Ù!";
}

void NeNe::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' ¹Ù»èÇÏ°Ô Æ¢±ä´ß.." << endl;
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
								puts("*");
							}
							if (x > 50) {
								gotoxy(x, startY);
								puts("*");
							}
						}
					}
					gotoxy(40, startY + 3);
					puts("Ä¡Å²");
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

void NeNe::delivery() {
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'¿¡ ÈÄ´Ù´ß ¹è´Þ Áß..." << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << "*** ¹è´Þ ¿Ï·á´ß! ***" << endl;
	Sleep(3000);
}