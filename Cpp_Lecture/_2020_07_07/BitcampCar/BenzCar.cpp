#include "BenzCar.h"
#include <iostream>
#include <ctime>	// time.h
#include <cstdlib>	// stdlib.h
#include <windows.h>

using namespace std;

BenzCar::BenzCar(string companyName)
{
	srand((unsigned int)time(NULL));
	this->score = 0;
	this->companyName = companyName;
}
void BenzCar::driver()
{
	int num = rand() % B_DRIVER_SKILL
				+ B_BASIC_SCORE;
	this->score += num;
	Sleep(BASIC_SLEEP_TIME -
		(num * BASIC_MULTIPLE_NUM));
	cout << "BenzCar::Good Driving~" << endl;
}
void BenzCar::accel()
{
	int num = rand() % B_ACCEL_SKILL
				+ B_BASIC_SCORE;
	this->score += num;
	Sleep(BASIC_SLEEP_TIME -
		(num * BASIC_MULTIPLE_NUM));
	cout << "BenzCar::Smooth Accelator~" << endl;
}
void BenzCar::brake()
{
	int num = rand() % B_BRAKE_SKILL
				+ B_BASIC_SCORE;
	this->score += num;
	Sleep(BASIC_SLEEP_TIME -
		(num * BASIC_MULTIPLE_NUM));
	cout << "BenzCar::Smooth Stop~" << endl;
}
int BenzCar::getScore()
{
	return this->score;
}
string BenzCar::getCompanyName()
{
	return this->companyName;
}