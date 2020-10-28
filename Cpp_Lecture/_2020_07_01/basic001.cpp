//1. main()의 실행 결과가 다음과 같도록 Tower클래스를 작성하세요
//
//높이는 1미터
//높이는 100미터

#include <iostream>

using namespace std;

class Tower
{
private:
	int height;
public:
	Tower()//생성자
	{
		height = 1;
	}
	Tower(int h)//함수오버로딩
	{
		height = h;
	}
	int getheight() 
	{
		return height;
	}
};

void main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}