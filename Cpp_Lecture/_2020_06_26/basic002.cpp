#include<iostream>

using namespace std;

void main()
{
	for (int i = 1; i <= 100; i++)
	{// 지역변수 i를 1 부터 100까지 범위 지정
		cout << i<<'\t';//i 출력시 탭으로 간격주고
		if (i%10 == 0)// 10으로 나눈 나머지가 0이면 10의 배수
			cout << endl;// 줄바꿈으로 10개씩 출력
	}
}