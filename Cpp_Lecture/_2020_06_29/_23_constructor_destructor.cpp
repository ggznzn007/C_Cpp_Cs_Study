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

public:
    /* 리턴값이 없다
       클래스명과 동일하다
    */
    // 객체 변수 생성시 자동 호출(초기화 작업)
    Restaurant() //디폴트 생성자
    {
        cout << "*** 생성자 함수 호출 ***" << endl;
        prepareRestaurant(1000000, 2.0f, 2.0f);
    }
    Restaurant(int _money, float _meat, float _rice) 
    {
        cout << "*** 매개변수 생성자 함수 호출 ***" << endl;
        prepareRestaurant(_money, _meat, _rice);
    }
    // 객체 변수 소멸시 자동 호출(사후 처리 작업)
    ~Restaurant() 
    {
        cout << "*** 소멸자 함수 호출 ***" << endl;
        afterWork();
    }

private:
    void cleanRestaurant() {
        cout << "식당을 청소한다" << endl;
    }
    void cookRice() {
        cout << "밥을 짓는다" << endl;
    }
    void cookSoup() {
        cout << "국을 끓인다" << endl;
    }
    void prepareRestaurant(int _money,
        float _meat, float _rice) {
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
    void afterWork() {
        cleanRestaurant();
        cout << "오늘 금액은 " << money << "이다" << endl;
    }
public:
    void greetGuest() {
        cout << "어서오세요" << endl;
    }
    void showMenu() {
        for (int i = 0; i < sizeof(cooks) / sizeof(cooks[i]); i++)
            cout << i << ". " << cooks[i] << endl;
    }
    void getSelMenu() {
        cout << "메뉴 번호를 선택하세요 >> ";
        cin >> selCookNum;
    }
    void dispatchCook() {
        cout << cooks[selCookNum] << " 요리 나왔습니다" << endl;
    }
    void calcFoodPrice(int _pay) {
        if (_pay > 0)
            money += _pay;
    }
};

void main()
{
    /*Restaurant rest;   */ // 생성자 함수 자동 호출
    Restaurant rest(99999,3.0f,4.0f);
    for (int i = 0; i < 3; i++)
    {
        rest.greetGuest();
        rest.showMenu();
        rest.getSelMenu();
        rest.dispatchCook();
        rest.calcFoodPrice(7000);
    }

}   // 소멸자 함수 자동 호출

