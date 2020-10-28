#include "DailyEmployee.h"

void DailyEmployee::inputEmployee()
{
	Employee::inputEmployee();
	cout << "시급 입력: ";
	cin >> this->perTimePay;
	cout << "일한 시간 입력: ";
	cin >> this->workHour;
}
void DailyEmployee::showEmployee()
{
	Employee::showEmployee();
	cout << "시급 : " << this->perTimePay << endl;
	cout << "일한 시간 : " << this->workHour << endl;
	cout << "월급 : " << calcPay() << endl;
}
int DailyEmployee::calcPay()
{
	return this->perTimePay * this->workHour;
}