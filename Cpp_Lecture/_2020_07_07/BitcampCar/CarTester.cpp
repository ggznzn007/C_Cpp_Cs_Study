#include "CarTester.h"

CarTester::CarTester(ICar* pICar)
{
	setICar(pICar);
}
void CarTester::testIntegration()
{
	cout << "�¢¢¢¢¢¢� Integration Test Start�¢¢¢¢¢¢�" << endl;
	cout << endl << endl;

	for (int i = 0; i < TEST_DRIVING_CNT; i++)
		testDriving();
	for (int i = 0; i < TEST_ACCELING_CNT; i++)
		testMaxAcceling();
	for (int i = 0; i < TEST_BRAKING_CNT; i++)
		testMaxBraking();
	for (int i = 0; i < TEST_REPETITION_CNT; i++)
		testRepetition();

	cout << "�¢¢¢¢¢¢� Integration Test End�¢¢¢¢¢¢�" << endl;
	cout << endl << endl;
}
void CarTester::setICar(ICar* pICar)
{
	this->iCar = pICar;
}

void CarTester::testDriving()
{
	cout << "--- Driving Test Start---" << endl;
	this->iCar->accel();
	this->iCar->driver();
	this->iCar->driver();
	this->iCar->driver();
	this->iCar->brake();
	cout << "--- Driving Test End---" << endl;
	cout << endl;
}
void CarTester::testMaxAcceling()
{
	cout << "--- Max Acceling Test Start---" << endl;
	this->iCar->accel();
	this->iCar->accel();
	this->iCar->accel();
	this->iCar->accel();
	this->iCar->brake();
	cout << "--- Max Acceling Test End---" << endl;
	cout << endl;
}
void CarTester::testMaxBraking()
{
	cout << "--- Max Braking Test Start---" << endl;
	this->iCar->accel();
	this->iCar->brake();
	this->iCar->brake();
	this->iCar->brake();
	this->iCar->brake();
	cout << "--- Max Braking Test End---" << endl;
	cout << endl;
}
void CarTester::testRepetition()
{
	cout << "--- Repetition Test Start---" << endl;
	this->iCar->accel();
	this->iCar->driver();
	this->iCar->brake();
	this->iCar->accel();
	this->iCar->driver();
	this->iCar->brake();
	this->iCar->accel();
	this->iCar->driver();
	this->iCar->brake();
	cout << "--- Repetition Test End---" << endl;
	cout << endl;
}
