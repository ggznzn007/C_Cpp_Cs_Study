// 함수의 모양
//리턴타입 함수명(매개변수)
//{영역의 시작
//return 리턴타입변수;
//}영역의 끝
//<함수를 설계할 때 정해줘야 하는 것>
//1. 함수명		- 무조건 존재
//2. 프로세스	- 무조건 존재
//3. 매개변수	- 변화 = 지역변수
//4. 리턴값		- 변화

#include <stdio.h>

// 매개변수 없고, 리턴값 있는 함수
int getNum()
{
	int num = 0;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	return num;
}

// 매개변수 있고, 리턴값 있는 함수
int add(int num0, int num1)
{
	return num0 + num1;
}

// 매개변수 있고, 리턴값 없는 함수
void viewResult(int result)
{
	printf("계산 결과는 %d 입니다\n", result);
}

// 매개변수 없고, 리턴값 없는 함수
void viewTitle()
{
	printf("**********더하기 연산입니다.*********\n");
}

void main()
{ // 함수의 시작 부분에 변수 선언
	viewTitle();
	int num0 = getNum();
	int num1 = getNum();
	// 변수 선언 이후로 프로세스 전개

}