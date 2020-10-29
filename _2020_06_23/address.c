/* <파일 분할 절차>
1. #define문, enum형, 구조체를
  h(헤더파일)을 만들어서 옮긴다.
*/

#include <stdio.h>
#include <string.h>

// secure함수를 안써도 에러를 발생시키지 않는다
//#define _CRT_SECURE_NO_WARNINGS


#define ADDR_LEN	10

#define INSERT_ADDR		1
#define PRINTALL_ADDR	2
#define EXIT_PROGRAM	3

typedef struct _Address
{
	char name[20];
	char address[30];
	int age;
}Address;

Address g_Address[ADDR_LEN];
int g_addrCnt = 0;

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

void saveAllAddress()
{
	FILE* fp = NULL;
	fopen_s(&fp, "address.bin", "wb");

	// 구조체 길이 저장
	fwrite(&g_addrCnt, sizeof(int), 1, fp);
	// 구조체 배열을 저장길이만큼 저장
	fwrite(g_Address, sizeof(Address),
		g_addrCnt, fp);

	fclose(fp);
}

void loadAllAddress()
{
	FILE* fp = NULL;
	errno_t err = 0;
	err = fopen_s(&fp, "address.bin", "rb");
	if (err == 0)	// 정상 스트림 오픈
	{
		fread(&g_addrCnt, sizeof(int), 1, fp);
		fread(g_Address, sizeof(Address), 
			g_addrCnt, fp);
		fclose(fp);
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

void main()
{
	int isRun = 1;	// 1인 경우 반복, 0인 경우 중지
	loadAllAddress();
	while (isRun)
	{
		showMenu();
		int sel = getSelMenu();
		isRun = processAddress(sel);
	}
}