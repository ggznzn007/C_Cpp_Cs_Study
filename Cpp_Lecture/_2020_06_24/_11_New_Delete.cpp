//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	int* num = new int();
//	*num = 100;
//	cout << *num << endl;
//	delete num;
//}

#include<iostream>

#define ARR_LEN 100

using namespace std;

void main()
{
	int* num = new int[ARR_LEN]();
	for (int i = 0; i < ARR_LEN; i++)
		num[i] = i;
	for (int i = 0; i < ARR_LEN; i++)
		cout << num[i] << endl;

	delete[]num;
}