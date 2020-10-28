//8. 문자열을 하나 입력받고 문자열의 부분 문자열을 출력하세요
//hello
//h
//he
//hel
//hell
//hello

#include <iostream>
#include <string>

using namespace std;

void main()
{
	char one[20];// 문자형 배열 선언
	cout << "문자열 1개 입력해주세요: ";
	cin.getline(one, 20);//enter까지 문자열 읽기
	for (int i = 0 ; i < strlen(one); i++)
	{//입력받는 문자열의 길이까지 크기를 잡고
		for (int j = 0; j <= i; j++)
		{//입력받는 문자열 중 요소를 문자열 길이끝까지 증가시킴
			cout << one[j];// 증가시키면서 배열의 문자를 출력
		}
		cout << endl;
	}
}