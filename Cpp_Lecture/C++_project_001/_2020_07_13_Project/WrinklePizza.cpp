#include "WrinklePizza.h"

WrinklePizza::WrinklePizza()
{
	this->storeName = "WrinklePizza";
	this->menu[0].foodName = "눈웃음꽃피자";
	this->menu[0].foodPrice = 18000;
	this->menu[1].foodName = "미간주름피자";
	this->menu[1].foodPrice = 19000;
	this->menu[2].foodName = "엄마주름피자";
	this->menu[2].foodPrice = 20000;
	this->menu[3].foodName = "아빠허리피자";
	this->menu[3].foodPrice = 20000;
}

void WrinklePizza::showWelcom() 
{
	setcolor(0x0001, 0);
	cout << "어서오세요! '" << storeName << "'입니다!";
	setcolor(0x000f, 0);
}

void WrinklePizza::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' 굽는 중..." << endl;
				int i1, j1, k, z, x1;
				int x = 34, y = 11;
				for (i1 = 1; i1 <= 9; i1++)
				{
					gotoxy(x, y);
					switch (i1)
					{
					case 1:
					case 9:
						x1 = 6; z = 4;
						Sleep(500);
						break;
					case 2:
					case 8:
						x1 = 8; z = 1;
						Sleep(500);
						break;
					case 3:
					case 7:
						x1 = 9; z = 1;
						Sleep(500);
						break;
					default:
						x1 = 10; z = 0;
						Sleep(500);
					}
					for (j1 = 1; j1 <= z; j1++)
					{
						cout << " ";
					}
					for (k = 1; k <= x1; k++)
					{
						if (i1 == 1 || i1 == 9)
							cout << "* ";
						else if (k == 1 || k == x1)
							cout << "* ";
						else
							cout << "  ";
					}
					++y;
				}
				gotoxy(35, 13);
				setcolor(0x000c, 0);
				cout << "   o    +   o";
				gotoxy(35, 15);
				setcolor(0x0002, 0);
				cout << "  +  o o     +";
				gotoxy(35, 17);
				setcolor(0x000e, 0);
				cout << "   +  o    o +";
				setcolor(0x000f, 0);
				Sleep(1000);
			}
		}
	}
}



void WrinklePizza::delivery()
{
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'에  출발!" << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << "| 맛있게 드세요! |" << endl;
	Sleep(3000);
}
