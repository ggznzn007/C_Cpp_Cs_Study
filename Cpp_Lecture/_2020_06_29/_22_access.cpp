/*
1) C :
   a) 절차지향 : 함수를 순서대로 진행
   b) 구조적   : main()기점으로 계속 분기
   c) 함수의 모양 : 매개변수(input), return(output)
				   외부와의 의존관계
   d) 함수 == 절차구현
   e) 변수들의 집합 ==> 구조체

2) C++
   a) 구조체 + 함수 ==> 클래스
   b) 몸 + 정신 ==> 사물/사람/일/시스템
   c) 접근권한
	  public   : 외부접근 가능(ex. 말, 표정, 몸짓)
	  private  : 안에서만 접근가능(ex. 성격)
	  protected : 자식은 public, 외부는 private(ex. 돈, 재산)
*/

/* <클래스내에서 멤버의 접근권한 설정 순서>
1) 변수 : private
   함수 : public
2) 함수중에는 외부에 노출할 함수와
   내부에서만 사용되는 함수가 있다.
   외부 노출 함수 pulic
   내부 노출 함수 private
*/
#include <iostream>
#include <string>

using namespace std;

class Restaurant
{
private:
	string cooks[6] = { "쇠고기덮밥", "카레덮밥",
				"떡볶이", "순대", "오뎅탕", "튀김" };
	int money;
	float meat;
	float rice;
	int selCookNum;
	void cleanRestaurant()
	{
		cout << "식당을 청소한다" << endl;
	}
	void cookRice()
	{
		cout << "밥을 짓는다" << endl;
	}
	void cookSoup()
	{
		cout << "국을 끓인다" << endl;
	}

public:
	
	void prepareRestaurant(int _money,
		float _meat, float _rice) 
	{
		cleanRestaurant();
		money = _money;
		meat = _meat;
		rice = _rice;
		cout << "현금 : " << money << endl;
		cout << "고기 : " << meat << endl;
		cout << "쌀 : " << rice << endl;
		cout << "이상 재료를 준비했다" << endl;
		cookRice();
		cookSoup();
	}
	
	void greetGuest() 
	{
		cout << "어서오세요" << endl;
	}
	void showMenu() 
	{
		for (int i = 0; i < sizeof(cooks) / sizeof(cooks[i]); i++)
			cout << i << ". " << cooks[i] << endl;
	}
	void getSelMenu() 
	{
		cout << "메뉴 번호를 선택하세요 >> ";
		cin >> selCookNum;
	}
	void dispatchCook() 
	{
		cout << cooks[selCookNum] << " 요리 나왔습니다" << endl;
	}
	void calcFoodPrice(int _pay) 
	{
		if (_pay > 0)
			money += _pay;
	}
	void afterWork() 
	{
		cleanRestaurant();
		cout << "오늘 금액은 " << money << "이다" << endl;
	}
};

void main()
{
	// 식당 클래스 변수 => 객체(object)
	// 인스턴스화 시켰다(설계도 -> 실체화)
	// 메모리에 생겼다(변수와 함수)
	Restaurant rest;
	rest.prepareRestaurant(100000, 2.5f, 3.4f);
	for (int i = 0; i < 3; i++)
	{
		rest.greetGuest();
		rest.showMenu();
		rest.getSelMenu();
		rest.dispatchCook();
		rest.calcFoodPrice(7000);
	}
	rest.afterWork();
}

