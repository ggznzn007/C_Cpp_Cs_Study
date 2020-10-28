#include<iostream>
using namespace std;

void main()
{
	int num;
	cout << "Input numbers(if num==1) * 3)): ";
	cin >> num;	

	int cnt = 0;
	bool isRun = num == 1;
	cout << "bool의 크기: " << sizeof(bool);
	//while (num == 1) // 버그의 원인이 될수 있음
	while(isRun==true)
	{
		cout << cnt << "\n";
		cnt++;
		if (cnt == 3)
			break;
	}
}