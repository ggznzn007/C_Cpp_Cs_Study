#define _CRT_SECURE_NO_WARNINGS	
//6. ';'으로 5개의 이름을 구분해서 입력받아, 
//각 이름을 끊어내여 화면에 출력하세요.
//그리고 가장 긴 이름을 판별해서 나타내세요.
//cin.getline(str, 100, ';');
//홍길동; 임꺽정; 장길산; 일지매; 모짜르트;
//1:홍길동
//2 : 임꺽정
//3 : 장길산
//4 : 일지매
//5 : 모짜르트
#include <iostream>
#include <string>

using namespace std;

void main()
{
	char name[100];
	char Longname[100];
	int longestN = 1;
	cout << "5명의 이름을 ';'으로 구분하여 입력해주세요"
		<< endl << ">>";
	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name,100,';');//엔터나올때까지 문자열 읽기
		cout << i << ":" << name << endl;
		if (strlen(name) > longestN)
		{			
			longestN = strlen(name);
			strcpy(Longname, name);//문자열끝까지 복사
		}
			//문자열의 길이를 반환하는 함수사용
	}
	cout << "가장 긴 이름은 " << Longname << "입니다" << endl;
}