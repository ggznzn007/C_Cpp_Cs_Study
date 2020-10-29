#include "turboc.h"

// 숫자 대신 의미있는 문자를 사용한다
// 처음 숫자 다음부터는 자동으로 1씩 증가한다
enum {
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

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

int getSelNum()
{
	int selNum = 0;
	printf("\n번호를 선택하세요 >> ");
	scanf_s("%d", &selNum);

	return selNum;
}

void inputAddress()
{
	printf("입력처리하였습니다~\n");
}
void searchAddress()
{
	printf("검색처리하였습니다~\n");
}
void updateAddress()
{
	printf("수정처리하였습니다~\n");
}
void deleteAddress()
{
	printf("삭제처리하였습니다~\n");
}
void printAllAddress()
{
	printf("전체출력처리하였습니다~\n");
}
void exitApp()
{
	printf("프로그램 종료하겠습니다~\n");
	// 전후상황 따지지 않고 종료
	exit(0);
}

int processWork(int selNum)
{
	int ret = 1;

	switch (selNum)
	{
	case INPUT_ADDR:
		inputAddress();
		break;
	case SEARCH_ADDR:
		searchAddress();
		break;
	case UPDATE_ADDR:
		updateAddress();
		break;
	case DELETE_ADDR:
		deleteAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_ADDR:
		ret = 0;
		break;
	default:
		printf("잘못 입력하셨습니다!\n");
		break;
	}
	return ret;
}

void laterProcess()
{
	getchar();				// scanf_s에서 입력된 값을 처리
	getchar();				// 아무 입력(화면 잠시 멈춤)
	clrscr();				// 화면 청소
}


void main()
{
	int selNum = 0;
	int isRun = 1;// 1이면 반복, 0이면 종료
	while (isRun)
	{
		viewMenu();				// 1. 메뉴 보여주기
		selNum = getSelNum();	// 2. 사용자 입력
		isRun = processWork(selNum);	// 3. 처리
		laterProcess();			// 4. 후처리

	}
}