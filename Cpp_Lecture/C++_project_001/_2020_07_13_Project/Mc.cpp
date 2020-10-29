#include "Mc.h"

Mc::Mc() {
	this->storeName = "맥도날드";
	this->menu[0].foodName = "빅맥 ";
	this->menu[0].foodPrice = 5500;
	this->menu[1].foodName = "슈슈버거";
	this->menu[1].foodPrice = 5500;
	this->menu[2].foodName = "더블치즈";
	this->menu[2].foodPrice = 5300;
	this->menu[3].foodName = "더블불고기";
	this->menu[3].foodPrice = 5500;
	this->menu[4].foodName = "1955버거";
	this->menu[4].foodPrice = 7000;
}

void Mc::showWelcom() 
{
	cout << "환영합니다~ '" << storeName << "'입니다~!";
}

void Mc::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' 조리중 중..." << endl;
				int x = 40, y = 20;
				gotoxy(x, y);
				setcolor(0x000e, 0);
				puts("***********");
				Sleep(1000);
				gotoxy(x - 1, y - 2);
				setcolor(0x000c, 0);
				puts("~~~~~~~~~~~~~~~");
				Sleep(1000);
				gotoxy(x - 1, y - 3);
				setcolor(0x0005, 0);
				puts("###############");
				Sleep(1000);
				gotoxy(x, y - 4);
				setcolor(0x0002, 0);
				puts("-------------");
				Sleep(1000);
				gotoxy(x + 1, y - 5);
				setcolor(0x000e, 0);
				puts("***********");
				Sleep(1000);
				setcolor(0x000f, 0);
			}
		}
	}
}

void Mc::delivery() {
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'에 맥딜리버리 출발!" << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << "| 맛있게 드세요! |" << endl;
	Sleep(3000);
}