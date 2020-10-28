#include <stdio.h>
#include <stdlib.h>

typedef struct _Address
{
	char name[20];
	char address[30];
	int age;
}Address;

void inputAddress(Address* pAddr)
{
	printf("이름 입력: ");
	fgets(pAddr->name, sizeof(pAddr->name) - 1, stdin);
	pAddr->name[strlen(pAddr->name) - 1] = 0;
	printf("주소 입력: ");
	fgets(pAddr->address, sizeof(pAddr->address) - 1, stdin);
	pAddr->address[strlen(pAddr->address) - 1] = 0;
	printf("나이 입력: ");
	scanf_s("%d", &(pAddr->age));
	getchar();	// '\n'를 제거
}

void showAddress(Address* pAddr)
{
	printf("\n");
	printf("이름: %s\n ", pAddr->name);
	printf("주소: %s\n ", pAddr->address);
	printf("나이: %d\n ", pAddr->age);
	printf("--------------------------------\n");
}

void main()
{
	int num = 0;
	printf("당신은 몇 명의 주소를 저장하시겠습니까? ");
	scanf_s("%d", &num);
	getchar();	// '\n'를 제거

	// Address배열을 num크기만큼 힙메모리에 할당하고
	// 배열의 시작주소를 pAddr에 저장하였다.
	Address* pAddr =
		(Address*)malloc(sizeof(Address) * num);

	for (int i = 0; i < num; i++)
		inputAddress(&pAddr[i]);
	
	for (int i = 0; i < num; i++)
		showAddress(&pAddr[i]);



	free(pAddr);
	
}