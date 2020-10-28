//5. "yes"가 입력될 때까지 종료하지 않는 프로그램을 작성해세요.
//입력은 cin.getline() 함수를 사용하세요
#include <iostream>
#include <string>

using namespace std;

void main()
{
	char no[100];//문자형배열 넉넉하게 선언
	for (int i = 0; i < sizeof(no); i++)
	{// 배열길이만큼 반복
		cout << "종료하고 싶으면 yes를 입력하세요>> ";
		cin.getline(no, 100);//enter키 나올때까지 문자열 읽기
		if (strcmp(no, "yes") == 0)
			break;
	}// 입력받은 문자열과 비교하여 같으면 종료
}

