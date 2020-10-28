#include<iostream>

using namespace std;

void main()
{
	int num;
	cout << "숫자를 입력하세여: ";
	cin >> num;

	bool b = num > 0;
	if (b == true)
		cout << num << "은 양수입니다" << endl;
	else if (b == false)
		cout << num << "은 양수가 아닙니다" << endl;
}