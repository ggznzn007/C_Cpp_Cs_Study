#include "turboc.h"

#define ADDR_NUM	100

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

typedef struct _AddressBook
{
	char name[20];
	char address[30];
	int age;
	float height;
	float weight;
}AddressBook;

AddressBook addressBook[ADDR_NUM];	// 주소록 정보 저장 배열
int g_nAddrCnt = 0;	   // 저장 인원수/다음 저장 위치

// 함수 원형/함수 선언부
void viewMenu();
int getSelNum();
void userInputAddress(AddressBook* pAddr);
void inputAddress();
void searchAddress();
void updateAddress();
void deleteAddress();
void showAddress(AddressBook* pAddr);
void printAllAddress();
void exitApp();
int processWork(int selNum);
void laterProcess();


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
	getchar();		// '\n'을 버퍼에서 제거

	return selNum;
}

void userInputAddress(AddressBook* pAddr)
{
	printf("이름 입력: ");
	fgets(pAddr->name, sizeof(pAddr->name), stdin);
	pAddr->name[strlen(pAddr->name) - 1] = '\0';	// '\n' -> '\0'
	printf("주소 입력: ");
	fgets(pAddr->address, sizeof(pAddr->address), stdin);
	pAddr->address[strlen(pAddr->address) - 1] = '\0';
	printf("나이 입력: ");
	char age[4] = { 0 };
	fgets(age, sizeof(age), stdin);	// "24"
	pAddr->age = atoi(age);		// "24" -> 24
	printf("키 입력: ");
	char height[10] = { 0 };
	fgets(height, sizeof(height), stdin); // "174.5"
	pAddr->height = (float)atof(height);	   //"174.5" -> 174.5
	printf("몸무게 입력: ");
	char weight[10] = { 0 };
	fgets(weight, sizeof(weight), stdin);	// "75.5"
	pAddr->weight = (float)atof(weight);	   // "75.5" -> 75.5
}

void inputAddress()
{
	AddressBook* pAddr = &addressBook[g_nAddrCnt];
	userInputAddress(pAddr);
	g_nAddrCnt++;
	printf("입력처리하였습니다~\n");
}
void searchAddress()
{
	char name[20] = { 0 };
	printf("검색할 이름 입력: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		// 동명이인은 신경쓰지 않겠다.
		if (strncmp(name, addressBook[i].name,
				strlen(name)) == 0)	// 같다
		{
			showAddress(&addressBook[i]);
			break;
		}
	}
	printf("검색처리하였습니다~\n");
}
void updateAddress()
{
	char name[20] = { 0 };
	printf("수정할 이름 입력: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		// 동명이인은 신경쓰지 않겠다.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// 같다
		{
			printf("[수정할 데이터를 새로 입력]\n");
			userInputAddress(&addressBook[i]);
			showAddress(&addressBook[i]);
			break;
		}
	}
	printf("수정처리하였습니다~\n");
}
void deleteAddress()
{
	char name[20] = { 0 };
	printf("삭제할 이름 입력: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		// 동명이인은 신경쓰지 않겠다.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// 같다
		{
			showAddress(&addressBook[i]);
			printf("Really(Y/N)? ");
			char ch = getchar();
			getchar();			// '\n'값 삭제
			if (ch == 'Y' || ch == 'y')
			{
				for (int j = i + 1; j < g_nAddrCnt; j++)
				{
					addressBook[j - 1] = addressBook[j];
				}
				g_nAddrCnt--;	
				printf("삭제처리하였습니다~\n");
			}			
			break;
		}
	}
}

void showAddress(AddressBook* pAddr)
{
	printf("이름 : %s\n", pAddr->name);
	printf("주소 : %s\n", pAddr->address);
	printf("나이 : %d\n", pAddr->age);
	printf("키 : %.1f\n", pAddr->height);
	printf("몸무게 : %.1f\n", pAddr->weight);
	printf("----------------------\n\n");
}

void printAllAddress()
{
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		showAddress(&addressBook[i]);
	}
	printf("전체출력처리하였습니다~\n");
}
void exitApp()
{
	printf("프로그램 종료하겠습니다~\n");
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
		exitApp();
		ret = 0;
		break;
	default:
		printf("잘 못 입력하셨습니다!\n");
		break;
	}

	return ret;
}

void laterProcess()
{
	getchar();		// scanf_s에서 입력된 \n을 처리
	getchar();		// 아무 입력(화면 잠시 멈춤)
	clrscr();		// 화면 청소
}

void main()
{
	int selNum = 0;
	int isRun = 1;	// 1이면 반복, 0이면 종료
	while (isRun)
	{
		viewMenu();						// 1. 메뉴 보여주기
		selNum = getSelNum();			// 2. 사용자 입력
		isRun = processWork(selNum);	// 3. 처리
		laterProcess();					// 4. 후처리
	}
}