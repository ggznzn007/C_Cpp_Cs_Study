#include "Store.h"

string Store::showStoreName() {
	return this->storeName;
}
string Store::kindOfStore() {
	return this->kindOf;
}
void Store::drawMap() {
	for (int x = 10; x <= 80; x++) {
		for (int y = 2; y <= 26; y++) {
			if (x == 10 || x == 80 || y == 2 || y == 26) {
				gotoxy(x, y);
				puts("*");
			}
		}
	}
}

void Store::showMenu() {
	gotoxy(TX - 5, TY);
	this->showWelcom();
	gotoxy(TX - 5, TY + 2);
	cout << "  이름" << "\t\t" << "가격";
	for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++) {
		if (this->menu[i].foodPrice != 0) {
			gotoxy(TX - 5, TY + 4 + i);
			setcolor(0x000e, 0);
			cout << i + 1 << ") " <<
				this->menu[i].foodName << "\t" <<
				this->menu[i].foodPrice;
			setcolor(0x000f, 0);
		}
	}
}

void Store::choiceMenu() {
	system("cls");
	while (1) {
		drawMap();
		showMenu();
		gotoxy(TX - 5, TY + 13);
		setcolor(0x000c, 0);
		cout << "메뉴 선택 (선택 완료시 0) : ";
		setcolor(0x000f, 0);
		int selM;
		cin >> selM;
		if (selM == 0) break;
		--selM;
		this->totalPrice = 0;
		gotoxy(TX - 5, TY + 15);
		setcolor(0x000a, 0);
		cout << "수량 선택 : ";
		setcolor(0x000f, 0);
		int numF;
		cin >> numF;
		menu[selM].numOfFood += numF;
		//if (this->storeName == "WrinklePizza" || this->storeName == "DoremiPizza") {
		//	this->extraTopping();
		//	this->pizzaSize();
		//}
		gotoxy(TX - 20, TY + 17);
		setcolor(0x000d, 0);
		cout << "선택한 메뉴 : ";
		setcolor(0x000f, 0);
		for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++) {
			if (this->menu[i].numOfFood != 0)
				cout << this->menu[i].foodName << " " << this->menu[i].numOfFood;
			if (this->menu[i].numOfFood != 0)
				cout << "  ";
			this->totalPrice += this->menu[i].foodPrice * this->menu[i].numOfFood;
		}
		gotoxy(TX - 20, TY + 19);
		setcolor(0x0002, 0);
		cout << "총 금액 : " << this->totalPrice;
		setcolor(0x000f, 0);
	}
}

void Store::checkAddress() {
	gotoxy(TX, TY + 19);
	setcolor(0x0009, 0);
	cout << "주소를 입력하세요 : ";
	cin >> this->address;
	setcolor(0x000f, 0);
}

void Store::delivery() {
	gotoxy(TX + 17, 15);
	setcolor(0x000b, 0);
	puts("==");
	gotoxy(TX + 16, 16);
	puts("====");
	gotoxy(TX + 16, 17);
	puts("|집|");
	gotoxy(TX + 16, 18);
	puts("▤▤");
	setcolor(0x000f, 0);
	int startX = TX - 10;
	for (int i = 0; i < 6; i++) {
		gotoxy(startX + 1, 17);
		setcolor(0x0004, 0);
		puts("--|");
		gotoxy(startX, 18);
		setcolor(0x0005, 0);
		puts("O  O");
		setcolor(0x000f, 0);
		Sleep(1000);
		gotoxy(startX + 1, 17);
		puts("   ");
		gotoxy(startX, 18);
		puts("    ");
		startX += 3;
	}
	Sleep(1000);
}

void  Store::setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

//void Store::extraTopping()
//{
//	string a;
//	gotoxy(TX - 20, TY + 17);
//	cout << "토핑추가를 하시겠습니까? (y/n)";
//	cin >> a;
//	gotoxy(TX - 20, TY + 17);
//	cout << "                                    ";
//	int selSize;
//	if (a == "y" || a == "Y")
//	{
//		gotoxy(TX - 20, TY + 17);
//		cout << "1.치즈(+1000원) 2.비프스테이크(+3000원) 3.쉬림프(+2000)";
//		gotoxy(TX - 20, TY + 18);
//		cout << "토핑 선택 : ";
//		cin >> selSize;
//		gotoxy(TX - 20, TY + 17);
//		cout << "                                                       ";
//		gotoxy(TX - 20, TY + 18);
//		cout << "             ";
//		if (selSize == 1)
//		{
//			this->totalPrice += 1000;
//		}
//		else if (selSize == 2)
//		{
//			this->totalPrice += 3000;
//		}
//		else if (selSize == 3)
//		{
//			this->totalPrice += 2000;
//		}
//	}
//}
//
//void Store::pizzaSize()
//{
//	gotoxy(TX - 20, TY + 17);
//	cout << "<1.Large(+ 3000원) 2.Medium 3.Small(-3000원)>>" << endl;
//	gotoxy(TX - 20, TY + 18);
//	cout << "사이즈 선택 : ";
//
//	int selSize;
//	cin >> selSize;
//	switch (selSize)
//	{
//	case 1:
//		this->totalPrice += 3000; break;
//	case 2: break;
//	case 3:
//		this->totalPrice -= 3000; break;
//	}
//}