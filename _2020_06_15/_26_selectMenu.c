/* 변수의 3가지 속성
1. = 왼쪽에 있는 경우 : (이름이 지칭하는 공간)
2. = 오른쪽에 있는 경우 : 이름 공간에 들어있는 값
3. &num : num변수의 주소 (시작위치)
*/

#include <stdio.h>

void main()
{
	int selNum = 0;

	// 1. 메뉴 보여주기
	printf("\t<주소록 관리 프로그램>\n");
	printf("1. 입력\n");
	printf("2. 검색\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("5. 전체출력\n");
	printf("6. 종료\n");


	// 2. 사용자 입력
	printf("\n번호를 선택하세요 >> ");
	//scanf("%d", &selNum);	// 버퍼오버플로우에 취약
	scanf_s("%d", &selNum);	// 아래처럼 바뀐다.
	//scanf_s("%d", &selNum, sizeof(selNum));

	// 3. 처리
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