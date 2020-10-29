#include "Pizza.h"

Pizza::Pizza() {
	this->kindOf = "Pizza";
}

void Pizza::choiceMenu() {
	Store::choiceMenu();
	this->extraTopping();
	this->pizzaSize();
	gotoxy(TX - 20, TY + 19);
	cout << "                        ";
	gotoxy(TX - 20, TY + 19);
	cout << "총 금액 : " << this->totalPrice;
}

void Pizza::extraTopping()
{
	string a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                                            ";
	gotoxy(TX - 20, TY + 17);
	cout << "토핑추가를 하시겠습니까? (y/n) : ";
	cin >> a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                    ";
	int selSize;
	if (a == "y" || a == "Y")
	{
		gotoxy(TX - 20, TY + 17);
		cout << "1.치즈(+1000원) 2.비프스테이크(+3000원) 3.쉬림프(+2000)";
		gotoxy(TX - 20, TY + 18);
		cout << "토핑 선택 : ";
		cin >> selSize;
		gotoxy(TX - 20, TY + 17);
		cout << "                                                       ";
		gotoxy(TX - 20, TY + 18);
		cout << "             ";
		if (selSize == 1)
		{
			this->totalPrice += 1000;
		}
		else if (selSize == 2)
		{
			this->totalPrice += 3000;
		}
		else if (selSize == 3)
		{
			this->totalPrice += 2000;
		}
	}
}

void Pizza::pizzaSize()
{
	gotoxy(TX - 20, TY + 17);
	cout << "<1.Large(+ 3000원) 2.Medium 3.Small(-3000원)>>" << endl;
	gotoxy(TX - 20, TY + 18);
	cout << "사이즈 선택 : ";

	int selSize;
	cin >> selSize;
	switch (selSize)
	{
	case 1:
		this->totalPrice += 3000; break;
	case 2: break;
	case 3:
		this->totalPrice -= 3000; break;
	}
}