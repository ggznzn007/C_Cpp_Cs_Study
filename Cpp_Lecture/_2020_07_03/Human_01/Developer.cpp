#include "Developer.h"

/* member initialize 영역
1) 생성자 아래 : 다음에 위치한다
2) 생성자 호출 전체 먼저 실행되는 영역
3) 부모 생성자 호출을 통해 부모 객체 초기화
4) 포함 멤버 객체의 초기화
5) 멤버 변수의 초기화(선택 사항)
*/

Developer::Developer(string name, int age,
	int nComputer, int _nLanguage)
	// member initialize 영역
	:ComputerEngineer(name, age, nComputer)
	, nLanguage(_nLanguage)
{
	//this->nLanguage = nLanguage;
	cout << "Developer 생성자 호출" << endl;
}
Developer::~Developer()
{
	cout << "Developer 소멸자 호출" << endl;
}

void Developer::neverEndingStudy()
{
	cout << this->name << "은 늘 공부를 한다" << endl;
}
void Developer::sleep()
{
	cout << this->name << "은 늦게 잘 때가 있다" << endl;
}
void Developer::overTime()
{
	ComputerEngineer::overTime();
	cout << "다음에 휴식을 취하자" << endl;
}
void Developer::info()
{
	ComputerEngineer::info();
	cout << this->name << "은 사용하는 언어가 " <<
		    this->nLanguage << "가지이다" << endl;
}