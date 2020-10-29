#include <iostream>

using namespace std;

int main(void)
{
	char ch[31]="";
	fgets(ch, 31, stdin);
	cout << ch;
	return 0;
}