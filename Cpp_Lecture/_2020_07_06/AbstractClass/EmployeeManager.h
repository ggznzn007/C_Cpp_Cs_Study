#pragma once
#include "Employee.h"

#define EMP_NUM		100

class EmployeeManager
{
private:
	Employee* employee[EMP_NUM];
	int empNum;

public:
	void showMenu();
	int getSelNum();
	void insertEmployee();
	void showAllEmployee();
};

