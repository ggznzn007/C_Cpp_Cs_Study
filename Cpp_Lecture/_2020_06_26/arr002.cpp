//2. char형 1차원배열을 선언 후 
//"Good Morning"로 초기화 하세요.
//그리고 문장을 출력하세요.
#include<iostream>

using namespace std;

void main()
{
	char GM[12] = { 'G','o','o','d',
	' ','M','o','r','n','i','n','g' };//초기화
	char GM1[13] = "Good morning";
	cout << endl;
	for (int i = 0; i <= GM[i]; i++)
	{// 배열내의 정보를 출력
		cout << GM[i];
	}

	cout << endl;
	cout << GM1;
}