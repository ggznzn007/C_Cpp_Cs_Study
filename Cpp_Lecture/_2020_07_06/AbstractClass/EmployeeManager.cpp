#include "EmployeeManager.h"
#include "RegularEmployee.h"
#include "TempEmployee.h"
#include "DailyEmployee.h"
#include <iostream>

using namespace std;

void EmployeeManager::showMenu()
{
	cout << "1. 사원입력" << endl;
	cout << "2. 사원전체출력" << endl;
	cout << "3. 프로그램 종료" << endl;
}
int EmployeeManager::getSelNum()
{
	int num = 0;
	cout << "메뉴를 선택 >> ";
	cin >> num;
	return  num;
}
void EmployeeManager::insertEmployee()
{
	if (this->empNum == EMP_NUM) {
		// 더 이상 입력 못해요
		return;
	}

	cout << "---사원 종류를 선택하세요---" << endl;
	cout << "1. 정규직" << endl;
	cout << "2. 임시직" << endl;
	cout << "3. 일용직" << endl;
	int sel = getSelNum();

	if (sel == 1) {
		RegularEmployee* regularEmp =
			new RegularEmployee();
		regularEmp->inputEmployee();

		this->employee[this->empNum] = regularEmp;
		this->empNum++;
	}
	else if (sel == 2) {
		TempEmployee* tempEmp =
			new TempEmployee();
		tempEmp->inputEmployee();

		this->employee[this->empNum] = tempEmp;
		this->empNum++;
	}
	else if (sel == 3) {
		DailyEmployee* dailyEmp =
			new DailyEmployee();
		dailyEmp->inputEmployee();

		this->employee[this->empNum] = dailyEmp;
		this->empNum++;
	}
	else {
		// 잘못 입력
	}
}
void EmployeeManager::showAllEmployee()
{
	//Employee 배열을 this->empNum까지 모두 출력
}