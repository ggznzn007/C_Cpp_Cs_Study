#include <iostream>

using namespace std;

void main()
{
	cout << "주소 입력: ";
	char address[100];
	cin.getline(address, sizeof(address), ' ');
	cout << address << endl;
}