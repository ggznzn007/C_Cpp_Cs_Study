#include "BurgerKing.h"

BurgerKing::BurgerKing() {
	this->storeName = "버거킹";
	this->menu[0].foodName = "와퍼 ";
	this->menu[0].foodPrice = 5400;
	this->menu[1].foodName = "해쉬치즈와퍼";
	this->menu[1].foodPrice = 6300;
	this->menu[2].foodName = "콰트로치즈와퍼";
	this->menu[2].foodPrice = 6300;
	this->menu[3].foodName = "불고기버거";
	this->menu[3].foodPrice = 2900;
	this->menu[4].foodName = "치킨크리스피";
	this->menu[4].foodPrice = 4900;
}

void BurgerKing::showWelcom() {
	cout << "버거의 왕! '" << storeName << "'입니다!";
}

void BurgerKing::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' 조리중 중..." << endl;
				int x = 40, y = 20;
				gotoxy(x + 1, y - 1);
				puts("******");
				Sleep(1000);
				gotoxy(x - 1, y - 2);
				puts("~~~~~~~~~~");
				Sleep(1000);
				gotoxy(x - 1, y - 3);
				puts("##########");
				Sleep(1000);
				gotoxy(x, y - 4);
				puts("--------");
				Sleep(1000);
				gotoxy(x + 1, y - 5);
				puts("******");
				Sleep(1000);
			}
		}
	}
}

void BurgerKing::delivery() {
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'에 버거킹 출발!" << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << " 맛있게 드세요! " << endl;
	Sleep(3000);
}