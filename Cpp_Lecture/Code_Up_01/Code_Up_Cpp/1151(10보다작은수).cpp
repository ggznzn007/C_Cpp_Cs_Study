#include <iostream>

using namespace std;

//int main()// 10보다 작으면 스몰출력 아니면 출력없음
//{
//	double n;
//	cin >> n;
//	if (n < 10)
//		cout << "small";
//	else;
//
//}

int main()// 10보다 작으면 스몰출력 이상이면 빅출력
{
	double n;
	cin >> n;
	if (n < 10)
		cout << "small";
	else
		cout << "big";

}