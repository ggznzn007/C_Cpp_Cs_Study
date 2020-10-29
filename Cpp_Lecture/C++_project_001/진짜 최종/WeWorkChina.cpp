#include "WeWorkChina.h"

WeWorkChina::WeWorkChina()
{
	this->storeName = "¿ì¸°ÀÏÇØÁßÈ­";
	this->menu[0].foodName = "ÀÏÇÏ´ÂÂ¥Àå";
	this->menu[0].foodPrice = 7000;
	this->menu[1].foodName = "ÀÏÇÏ´ÂÂ«»Í";
	this->menu[1].foodPrice = 7000;
	this->menu[2].foodName = "ÅÁÅÁÅÁ¼öÀ°";
	this->menu[2].foodPrice = 12000;
	this->menu[3].foodName = "±îÀÚ±ñÇ³±â";
	this->menu[3].foodPrice = 12000;
	this->menu[4].foodName = "½¬ÀÚÂ«Â¥¸é";
	this->menu[4].foodPrice = 7500;


}

void WeWorkChina::showWelcom()
{
	cout << "¾î¼­¿À¼¼¿ä! '" << this->storeName << "'ÀÔ´Ï´Ù!";
}
void WeWorkChina::cooking()
{
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' Á¶¸® Áß..." << endl;
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
								puts("*");
							}
							if (x > 50) {
								gotoxy(x, startY);
								puts("*");
							}
						}
					}
					for (int x = 33; x < 67; x++) {
						for (int y = startY + 11; y < startY + 12; y++) {/*int y = startY+8; y < startY + 14; y++*/
							if (y == startY + 11 && x < 50) {
								gotoxy(x, y);
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
							}

						}
					}
					gotoxy(37, startY + 1);
					puts("~~~~~~~~~~~~");
					gotoxy(37, startY + 2);
					puts("~~~~~~~~~~~~");
					gotoxy(37, startY + 3);
					puts("~~~~~~~~~~~~");
					gotoxy(37, startY + 4);
					puts("~~~~~~~~~~~~");

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
void WeWorkChina::delivery()
{
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'¿¡ ¿À¿ì ºü¸£°Ô ¹è´Þ Áß..." << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << "*** ¹è´Þ ¿Ï·á Â°Àï¤š»Í! ***" << endl;
	Sleep(3000);
}
