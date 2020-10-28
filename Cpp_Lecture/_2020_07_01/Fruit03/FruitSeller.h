#pragma once

//클래스 선언부
class FruitSeller
{
private:
	int numOfApple = 20;
	int money = 100000;
	const int APPLE_PRICE = 1000;

public:
	int saleApple(int money);
	void showSaleResult();

};