#include <iostream>

using namespace std;

void printNames(const char** names, int len)
{
	for (int i = 0; i < len; i++)
		cout << names[i] << endl;
}
void main()
{
	const char* names[] = 
		{ "È«±æµ¿", "ÀÓ²©Á¤", "Àå±æ»ê" };
	printNames(names, sizeof(names)/sizeof(names[0]));
}