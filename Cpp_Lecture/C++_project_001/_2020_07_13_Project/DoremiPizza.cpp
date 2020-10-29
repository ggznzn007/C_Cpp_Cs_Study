#include "DoremiPizza.h"

DoremiPizza::DoremiPizza()
{
	this->storeName = "DoremiPizza";
	this->menu[0].foodName = "파솔라피자";
	this->menu[0].foodPrice = 18000;
	this->menu[1].foodName = "도피자";
	this->menu[1].foodPrice = 20000;
	this->menu[2].foodName = "뱃살피자";
	this->menu[2].foodPrice = 30000;
	this->menu[3].foodName = "저칼로리피자";
	this->menu[3].foodPrice = 10000;
}

void DoremiPizza::showWelcom() 
{
	setcolor(0x0001, 0);
	cout << "어서오세요! '" << storeName << "'입니다!";
	setcolor(0x000f, 0);
}
void DoremiPizza::cooking()
{
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' 굽는 중..." << endl;
				int h, e, s, z, x1;
				int x = 34, y = 11;
				for (h = 1; h <= 9; h++)
				{
					gotoxy(x, y);
					switch (h)
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
					for (e = 1; e <= z; e++)
					{
						cout << " ";
					}
					for (s = 1; s <= x1; s++)
					{
						if (h == 1 || h == 9)
							cout << "* ";
						else if (s == 1 || s == x1)
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
void DoremiPizza::delivery()
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