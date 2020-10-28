// 3) string 클래스 사용하기
// 내부에 char* 로 동적할당으로 문자열 관리
#include <iostream>
#include <string>

using namespace std;

void main()
{
	string song("Falling in love wiht you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";

	getline(cin, singer);

	if (singer == elvis)
		cout << "맞았습니다" << endl;
	else
		cout << "틀렸습니다" + elvis + "입니다" << endl;
}