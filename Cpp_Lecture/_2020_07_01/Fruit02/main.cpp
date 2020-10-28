/* 둘 이상의 클래스를 만들어서 상호작용

"과일구매자가 과일장수한테 2000원을 주고
사과 2개를 구매했다"

[객체지향 설계 방법]
1) 업무별(역할별) - MVC 패턴
   Model: Data, DataAccess        (명사형 클래스)
   View : 화면, 사용자와의 입출력   (명사형 클래스)
   Controller : 업무, 로직, 처리 집합 (동사형 클래스)
2) 명사-동사 구분법
   명사중에 큰 개념 : 클래스의 대상
   명사중에 작은 개념 : 멤버변수의 대상
   동사들이 모여서 종류 그룹 : 클래스
   그냥 동사(하는 기능) : 멤버함수
*/
/*
"과일구매자가 과일장수한테 2000원을 주고
사과 2개를 구매했다"

명사: 과일구매자, 과일장수, 2000원, 사과 2개
동사: 주다, 구매하다

클래스 : 과일구매자, 과일장수
멤버변수 : 2000원, 사과 2개
멤버함수 : 주다, 구매하다
*/

/*<파일 분할 절차>
----> 1) class를 선언부와 구현부로 분리한다
2) 선언부는 헤더파일로 생성한다
3) 구현부는 소스파일로 생성한다
4) 해당 파일에 없는 정보는 #include를 해준다
*/

#include <iostream>

using namespace std;

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

class FruitBuyer
{
private:
	int money = 10000;
	int numOfApple = 0;

public:
	void buyApple(FruitSeller& seller, int money);
		void showBuyResult();
	
};

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

void main()
{
	FruitSeller seller;
	FruitBuyer buyer;
	buyer.buyApple(seller, 2000);

	seller.showSaleResult();
	buyer.showBuyResult();
}