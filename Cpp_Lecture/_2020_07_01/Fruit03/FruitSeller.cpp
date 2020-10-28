#include "FruitSeller.h"
#include <iostream>
using namespace std;

//클래스의 구현부
int FruitSeller::saleApple(int money)// 소속을 밝혀라
{
	int num = money / APPLE_PRICE;
	this->numOfApple -= num;
	this->money += money;
	return num;
}
void FruitSeller::showSaleResult()
{
	cout << "[판매자의 현황]" << endl;
	cout << "남은 사과: " << this->numOfApple << endl;
	cout << "전체 총액: " << this->money << endl << endl;
}