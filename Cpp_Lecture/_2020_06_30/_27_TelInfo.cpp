#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN		20
#define TEL_LEN			20
#define MAX_PERSON_NUM	100

/* C++에서 struct와 class는 99% 같다
  단 1가지 차이가 
  struct는 기본적으로 모두 public 접근 권한이고
  class는 기본적으로 모두 private 접근 권한이다.
  이렇게 차이가 나는 이유는?
  1) C++에서 C코드를 실행할 수 있게 하기 위해서
     (코드 호환성을 갖게 하려고)
	 C언어에서 구조체의 멤버는 그냥 접근한다(public)
  2) class의 기본 권한을 private으로 하려고 했던 이유는?
     전역변수를 이 함수 저 함수에서 마구 접근하는 관계로
	 예상치 못한 Bug가 많이 발생하는 것을 경험
	 그래서 '변수는 막 접근하게 하면 안되는구나!'
	 정식절차를 밟은 대상만 접근을 허용하게 하려고 한다
	 그래서 기본적으로 변수를 보호하는 것이 중요하다고
	 생각했다
*/
class Person
{
	// 멤버변수는 직접 접근을 막는것을 원칙으로 한다
private:
	//char name[NAME_LEN];
	//char phone[TEL_LEN];
	char* name;
	char* phone;

public:
	Person() {
		name = new char[NAME_LEN];
		phone = new char[TEL_LEN];
	}
	~Person() {
		delete[] name;
		delete[] phone;
	}

	// 대신 멤버변수는 멤버함수를 통해 접근하도록 한다
public:
	// getter
	char* getName() {
		return name;
	}
	// setter
	void setName(char* _name)
	{
		strncpy(name, _name, strlen(_name));
		name[strlen(_name)] = '\0';// 0, NULL
	}
	char* getPhone()
	{
		return phone;
	}
	void setPhone(char* _phone)
	{
		strncpy(phone, _phone, strlen(_phone));
		phone[strlen(_phone)] = '\0';
	}
	void showPerson()
	{
		printf("name: %s\n", name);
		printf("phone: %s\n", phone);
	}
};

// C++에서는 이런 함수를 '전역 함수'라 부른다
void ShowMenu();
void InsertTelInfo(Person* par, int* pnum);
void DeleteTelInfo(Person* par, int* pnum);
void SearchTelInfo(Person* par, int num);
void PrintAll(Person* par, int num);
void ClearScreen();

void main()
{
	int choice = 0;						// 메뉴선택
	int nPersonNum = 0;

	Person* perArr = NULL;
	int perNum = 0;						// 저장된 인원수

	printf("저장할 인원수는 몇명입니까? : ");
	scanf("%d", &nPersonNum);
	perArr = new Person[nPersonNum];

	while (1)
	{
		ShowMenu();
		printf("Choose the item : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			InsertTelInfo(perArr, &perNum);
			break;
		case 2:
			DeleteTelInfo(perArr, &perNum);
			break;
		case 3:
			SearchTelInfo(perArr, perNum);
			break;
		case 4:
			PrintAll(perArr, perNum);
			break;
		case 5:
			delete[] perArr;
			return;
			break;
		default:
			printf("illegal selection.. \n");
			break;
		}
	}
}

void ShowMenu()
{
	ClearScreen();

	printf("\n------------- Menu -------------\n");
	printf("	1. Insert \n");
	printf("	2. Delete \n");
	printf("	3. Search \n");
	printf("	4. Print All \n");
	printf("	5. Exit \n");
}

void InsertTelInfo(Person* par, int* pnum)
{
	char name[NAME_LEN];
	char phone[TEL_LEN];
	printf("[ INSERT ] \n");
	printf("Input Name : ");
	scanf("%s", name);
	printf("Input Tel Number : ");
	scanf("%s", phone);

	par[*pnum].setName(name);
	par[*pnum].setPhone(phone);
	//strcpy(par[*pnum].name, name);
	//strcpy(par[*pnum].phone, phone);
	(*pnum)++;

	printf("-----------> Data Inserted......\n");
}

void DeleteTelInfo(Person* par, int* pnum)
{
	int i = 0, j = 0;
	char name[NAME_LEN];

	printf("[ Delete ] \n");
	printf("Input Name for Removing : ");
	scanf("%s", name);

	for (i = 0; i < *pnum; i++)
	{
		if (strcmp(par[i].getName(), name) == 0)
		{
			for (j = i + 1; j < *pnum; j++)
			{
				strcpy(par[j - 1].getName(), par[j].getName());
				strcpy(par[j - 1].getPhone(), par[j].getPhone());
			}
			(*pnum)--;
			return;
		}
	}

	printf("-------------> Data Not Found..........\n");
}

void SearchTelInfo(Person* par, int num)
{
	int i = 0;
	char name[NAME_LEN];

	printf("[ Search ] \n");
	printf("Input Name for Searching : ");
	scanf("%s", name);

	for (i = 0; i < num; i++)
	{
		if (strcmp(par[i].getName(), name) == 0)
		{
			par[i].showPerson();
			return;
		}
	}

	printf("-------------> Data Not Found..........\n");
}

void PrintAll(Person* par, int num)
{
	int i = 0;

	printf("[ Print All Data ] \n");

	for (i = 0; i < num; i++)
		par[i].showPerson();	

	getchar();
	getchar();
}

void ClearScreen()
{
	// Console의 Dos명령 실행
	system("cls");
}
