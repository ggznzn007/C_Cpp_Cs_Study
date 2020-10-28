//4. < Enter > 키가 입력될 때까지 문자들을 읽고,
//입력된 문자 'x'의 개수를 화면에 출력하세요.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str[30];//문자열 입력할 배열 선언
	int cnt = 0;// 'x'의 개수를 카운팅할 변수
	cout << "문자들을 입력해주세요: ";
	cin.getline(str, 30);//getline 함수로 enter입력전까지 읽기
	for (int i = 0; i < sizeof(str); i++)
	{//문자배열의 길이만큼 읽고
		if (str[i] == 'x')//문자열중에 x가 있으면
			cnt++;// 수를 카운팅해주고
	}
	cout << "x의 개수는 " << cnt << " 입니다" << endl;
	return 0;
}