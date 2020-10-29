#include "ToyotaCar.h"
#include <iostream>
#include <ctime>	// time.h
#include <cstdlib>	// stdlib.h
#include <windows.h>

using namespace std;

ToyotaCar::ToyotaCar(string companyName)
{
	srand((unsigned int)time(NULL));
	this->score = 0;
	this->companyName = companyName;
}
void ToyotaCar::driver()
{
	int num = rand() % T_DRIVER_SKILL
				+ T_BASIC_SCORE;
	this->score += num;
	Sleep(BASIC_SLEEP_TIME -
		(num * BASIC_MULTIPLE_NUM));
	cout << "ToyotaCar::¾Æº£°¡ ¿îÇàÇÑ´Ù. ±âºÐÀÌ ³ª»Ú´Ù~" << endl;
}
void ToyotaCar::accel()
{
	int num = rand() % T_ACCEL_SKILL
				+ T_BASIC_SCORE;
	this->score += num;
	Sleep(BASIC_SLEEP_TIME -
		(num * BASIC_MULTIPLE_NUM));
	cout << "ToyotaCar::¾Æº£°¡ ¸· ¹â¾Æ´í´Ù.³£ ³¢±ã~" << endl;
}
void ToyotaCar::brake()
{
	int num = rand() % T_BRAKE_SKILL
		+ T_BASIC_SCORE;
	this->score += num;
	Sleep(BASIC_SLEEP_TIME -
		(num * BASIC_MULTIPLE_NUM));
	cout << "ToyotaCar::¾Æº£°¡ ¼ö½Ã·Î ¸ØÃá´Ù.~" << endl;
}
int ToyotaCar::getScore()
{
	return this->score;
}
string ToyotaCar::getCompanyName()
{
	return this->companyName;
}