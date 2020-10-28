#include "FruitSeller.h"
#include "FruitBuyer.h"
#include <iostream>
using namespace std;


//클래스의 구현부
void FruitBuyer::buyApple(FruitSeller& seller, int money)
{
	this->numOfApple = seller.saleApple(money);
	this->money -= money;
}
void FruitBuyer::showBuyResult()
{
	cout << "[구매자의 현황]" << endl;
	cout << "사과 개수: " << this->numOfApple << endl;
	cout << "현재 잔액: " << this->money << endl;
}