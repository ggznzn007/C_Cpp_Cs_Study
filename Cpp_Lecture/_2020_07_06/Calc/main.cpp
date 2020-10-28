#include "Calc.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include <iostream>
using namespace std;

int getAndSelNum()
{
	int num = 0;
	cout << "계산을 선택하세요 (0:Add, 1:Sub, 2:Mul, 3:Div) >> ";
	cin >> num;
	return num;
	/*switch (num == 0)
	{
	case 0: 
		{cout << "Add 계산입니다" << endl; }
	case 1:
		{cout << "Sub 계산입니다" << endl; }
	case 2:
		{cout << "Mul 계산입니다" << endl; }
	case 3:
		{cout << "Div 계산입니다" << endl; }
	}*/
	
}

void main()
{	
	int a = 0; int b = 0;
	int num = getAndSelNum();
	if (num == 0)
	{
		cout << "Add 계산입니다" << endl;
	}
	else if (num == 1)
	{
		cout << "Sub 계산입니다" << endl;
	}
	else if (num == 2)
	{
		cout << "Mul 계산입니다" << endl;
	}
	else if (num == 3)
	{
		cout << "Div 계산입니다" << endl;
	}
	cout << "숫자 2개를 입력하세요" << endl;
	cin >> a >> b;

	Calc* calc[4] = { new Add(),
					  new Sub(),
					  new Mul(),
					  new Div() };
	while (1)
	{
		if (num == 0)
		{			
			calc[0]->setValue(a, b);
			calc[0]->calculate();
			cout << "결과는" << calc[0]->calculate() << "입니다" << endl;
			break;
		}
		else if (num == 1)
		{
			/*cout << "Sub 계산입니다." << endl;*/
			calc[1]->setValue(a, b);
			calc[1]->calculate();
			cout << "결과는" << calc[1]->calculate() << "입니다" << endl;
			break;
		}
		else if (num == 2)
		{
			/*cout << "Mul 계산입니다." << endl;*/
			calc[2]->setValue(a, b);
			calc[2]->calculate();
			cout << "결과는" << calc[2]->calculate() << "입니다" << endl;
			break;
		}
		else if (num == 3)
		{
			/*cout << "Div 계산입니다." << endl;*/
			calc[3]->setValue(a, b);
			calc[3]->calculate();
			cout << "결과는" << calc[3]->calculate() << "입니다" << endl;
			break;
		}

	}
	delete calc[0];
	delete calc[1];
	delete calc[2];
	delete calc[3];
}