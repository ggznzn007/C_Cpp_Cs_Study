#include "ICar.h"
#include "HyundaiCar.h"
#include "KiaCar.h"
#include "ToyotaCar.h"
#include "BenzCar.h"
#include "CarTester.h"

void heapDeleteAll(ICar** dpICar, int len)
{
	for (int i = 0; i < len; i++)
		delete dpICar[i];
}

int maxIdx(ICar** dpICar, int len)
{
	int maxIdx = 0;
	int max = dpICar[0]->getScore();
	for (int i = 1; i < len; i++) {
		if (max < dpICar[i]->getScore()) {
			max = dpICar[i]->getScore();
			maxIdx = i;
		}
	}

	return maxIdx;
}

void main()
{
	ICar* arrICar[] = {
			new HyundaiCar("현대자동차"), 
			new KiaCar("기아자동차"),
			new ToyotaCar("도요타"),
			new BenzCar("메르세데스-벤츠")};
	int arrLen = sizeof(arrICar) / sizeof(arrICar[0]);

	CarTester carTester;
	for (int i = 0; i < arrLen; i++) {
		carTester.setICar(arrICar[i]);
		carTester.testIntegration();
	}

	for (int i = 0; i < arrLen; i++) {
		cout << "회사명 : " << arrICar[i]->getCompanyName()
			<< "  평가점수 : " << arrICar[i]->getScore() << endl;
	}

	int selIdx = maxIdx(arrICar, arrLen);
	cout << endl;
	cout << "선정된 회사는 " << arrICar[selIdx]->getCompanyName()
		<< " 입니다" << endl;
	cout << "최고 점수는 " << arrICar[selIdx]->getScore() 
		<< " 입니다" << endl;

	heapDeleteAll(arrICar, arrLen);
}