#pragma once
#include <iostream>
using namespace std;

/* 순수 가상 함수가 1개이상이 있으면
추상 클래스(Abstract Class)라 부른다
이 클래스는 객체를 만들 수 없다

무조건 상속을 전제로 한다
*/
class Employee
{
private:
	string name;
	string companyNum;
public:
	virtual void inputEmployee();
	virtual void showEmployee();
	virtual int calcPay() = 0;	// 순수 가상 함수
};

