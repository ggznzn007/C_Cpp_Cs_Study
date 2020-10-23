/* 변수의 3가지 속성
1. = 왼쪽에 있는 경우 : (이름이 지칭하는 공간)
2. = 오른쪽에 있는 경우 : 이름 공간에 들어있는 값
3. &num : num변수의 주소 (시작위치)
*/

/*
	   함수를 만드는 2가지 목적
	1. 반복되는 코드의 규칙성을 찾아서
	   변화되는 요소만 매개변수 지정해서 묶어준다
	   (여러번 사용되니까 1번만 그룹화 시켜서 이름을 부여하면 재사용에 매우 편리하다)
	2. 업무의 단위를 적절한 단위로 그룹화(함수생성) 하면
	   전체 흐름을 일목요연하게 정리할 수 있다.
*/
/*
	   C프로그래밍 설계
	1. Mind Map
	: 구조적 프로그래밍(공간 구성, 분기)
	분업화 시스템
	2. Flow Chart(순서도)
	:절차지향 프로그래밍(시간의 흐름, 선택)
*/
/*
	  설계
	  1. 하향식 설계 (GPS)
		; 그림, 아키텍처 -> 코드화
	  2. 상향식 설계 (3D 가속센서)
		; 부분(단위) 코드 완성
		-> 감이 생긴다
		-> 중간 정도에 전체 레이아웃을 설계
		-> 나머지 부분을 완성해나간다
*/

#include <stdio.h>

void viewMenu()
{
	printf("\t<주소록 관리 프로그램>\n");
	printf("1. 입력\n");
	printf("2. 검색\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("5. 전체출력\n");
	printf("6. 종료\n");
}

int getSelnum()
{
	int selNum = 0;
	printf("\n번호를 선택하세요 >> ");
	//scanf("%d", &selNum);	// 버퍼오버플로우에 취약
	scanf_s("%d", &selNum);	// 아래처럼 바뀐다.
	//scanf_s("%d", &selNum, sizeof(selNum));

	return selNum; // 이함수의 일처리가 끝나면 가지고 돌아갈 값
					// 이 값의 자료형을 함수명으로 작성
}

void processWork(int selNum)
{
	if (selNum == 1)
		printf("입력처리하였습니다~\n");
	else if (selNum == 2)
		printf("검색처리하였습니다~\n");
	else if (selNum == 3)
		printf("수정처리하였습니다~\n");
	else if (selNum == 4)
		printf("삭제처리하였습니다~\n");
	else if (selNum == 5)
		printf("전체출력처리하였습니다~\n");
	else if (selNum == 6)
		printf("프로그램 종료하겠습니다~\n");
}

void main()
{
	// getSelnum 함수의 변수와 동명의 다른 공간
	int selNum = 0;
	
	printf("%#x\n", viewMenu);
	printf("%#x\n", getSelnum);
	printf("%#x\n", processWork);

	viewMenu(); // 1. 메뉴 보여주기
	selNum = getSelnum();// 2. 사용자 입력
	processWork(selNum);// 3. 처리
	
}