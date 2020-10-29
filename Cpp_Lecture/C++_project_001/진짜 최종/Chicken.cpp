#include "Chicken.h"

Chicken::Chicken() {
	this->kindOf = "Chicken";
}

void Chicken::choiceMenu() {
	Store::choiceMenu();
	this->choiceFillets();
	gotoxy(TX - 20, TY + 19);
	cout << "                        ";
	gotoxy(TX - 20, TY + 19);
	cout << "총 금액 : " << this->totalPrice;
}

void Chicken::choiceFillets() {
	string a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                    ";
	gotoxy(TX - 20, TY + 17);
	cout << "순살로 하시겠습니까? +2000 (y/n) : ";
	cin >> a;
	if (a == "y" || a == "Y")
	{
		this->totalPrice += 2000;
	}
}