//4. 길이가 5인 int형 배열 arr을 선언하고 
//1, 2, 3, 4, 5로 초기화한다.
//마지막 요소를 가리키는 ptr을 선언하고
//ptr을 감소하는 연산으로 배열의 요소를 모두 더하여 결과를
//출력한다.
#include<iostream>

using namespace std;

void main()
{
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[5];
	for (int i = 0; i > arr[i]; i--)
	{
		*(ptr - i);
		cout << *ptr;
	}
	

}
