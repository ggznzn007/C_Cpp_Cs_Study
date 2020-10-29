#include <stdio.h>	// puts
#include <string.h> // strlen
#include "addressDefine.h" // ADDR_LEN, Address구조체
#include "addressModel.h"	// saveAllAddress

// 다른 곳에 존재하는 전역변수를 
// 공유해서 사용하겠다
// 변수선언 x, 변수공유 o
// 변수초기화 하면 재정의 오류 발생
// 그래서 변수 초기화 하면 안된다.
extern Address g_Address[ADDR_LEN];
extern int g_addrCnt;

// 함수의 정의부(구현부)
void showMenu()
{
	puts("1. Insert");
	puts("2. PrintAllAddress");
	puts("3. Exit");
}

int getSelMenu()
{
	int num = 0;
	printf("Select Number >> ");
	num = getchar() - '0';	// 문자숫자->숫자
	getchar();	// 버퍼에 남아있는 '\n'를 제거
	return num;
}

void insertAddress()
{
	if (g_addrCnt == ADDR_LEN)
	{
		puts("Memory Full!!!");
		return;
	}

	char name[20];
	char address[30];
	int age = 0;
	printf("\n--------[Insert]----------\n");
	printf("이름을 입력하세요 >> ");
	/*
	-1) 버퍼에서 '\n'만날때까지 읽어들인다
	그래서 name에는 마지막에 '\n'이 존재한다
	-2)stdin: standard input의 약자로
		   console환경시대에 가장 기본적인
		   입력장치가 키보드였던 것에서 비롯됨
	-3)fgets의 마지막 인자에 stdin을 주면 키보드로
	   부터 입력
	   파일포인터인 fp를 전달하면 파일로부터 입력
	   한라인씩 읽어들인다('\n'까지)
	*/
	// "홍길동\n"
	// "홍길동\n" : strlen => 7글자
	// name[7-1] : '\n' => '\0'
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;// '\0', NULL
	printf("주소를 입력하세요 >> ");
	fgets(address, sizeof(address) - 1, stdin);
	address[strlen(address) - 1] = 0;
	printf("나이를 입력하세요 >> ");
	scanf_s("%d", &age);
	getchar();	// 버퍼에 남은 '\n'을 제거

	// 전역변수 구조체 배열에 저장하자
	// 아래처럼 하면 주소만 복사가 된다
	//g_Address[g_addrCnt].name = name;

	// 문자열의 복사는 반드시 함수를 사용해라
	strncpy_s(g_Address[g_addrCnt].name,
		sizeof(g_Address[g_addrCnt].name),
		name, sizeof(name));
	strncpy_s(g_Address[g_addrCnt].address,
		sizeof(g_Address[g_addrCnt].address),
		address, sizeof(address));
	g_Address[g_addrCnt].age = age;

	// 저장인원수/다음저장할 배열의 위치
	g_addrCnt++;	// 저장되었으니까 증가
}

void printAllAddress()
{
	for (int i = 0; i < g_addrCnt; i++)
	{
		printf("\n---------------------\n");
		printf("이름 : %s\n", g_Address[i].name);
		printf("주소 : %s\n", g_Address[i].address);
		printf("나이 : %d\n", g_Address[i].age);
	}
}

int processAddress(int sel)
{
	int ret = 1;

	switch (sel)
	{
	case INSERT_ADDR:
		insertAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_PROGRAM:
		ret = 0;
		saveAllAddress();
		//exit(0);
		break;
	default:
		puts("Invalid Number!");
		break;
	}

	return ret;
}
