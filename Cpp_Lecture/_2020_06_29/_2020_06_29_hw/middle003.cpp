//3. 소수점을 가지는 5개의 실수를
//입력받아 제일 큰 수를 출력하세요
#include <iostream>

using namespace std;

int main()
{
	cout << "5개의 실수를 입력하세요: ";
	float a[5];//배열로 입력받을 실수 5개 선언
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	//선언된 배열에 실수 5개의 실수 입력
	float Max = a[0];//제일 큰 수의 변수 선언
	for (int i = 1; i < 5; i++)//차례대로 받은값을 비교하는 반복문
	{
		if(a[i]>Max)//실수 배열이 큰값일때
		{
			Max = a[i];//실수 배열을 Max값에 대입
		}//ex)1.1 >1 == 1.1=> Max대입해서 차례대로 비교
	}
	cout << "5개 중에 제일 큰 수는 " 
		<< Max << "입니다." << endl;

	return 0;
}