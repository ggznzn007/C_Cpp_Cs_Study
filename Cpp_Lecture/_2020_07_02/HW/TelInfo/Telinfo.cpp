#include "Divtelinfo.h"
#include <iostream>

using namespace std;

Person::Person()
{
	name = new char[NAME_LEN];
	phone = new char[TEL_LEN];
}
Person::~Person()
{
	delete[] name;
	delete[] phone;
}

char* Person::getName() {
	return name;
}
// setter
void Person::setName(char* _name)
{
	strncpy(name, _name, strlen(_name));
	name[strlen(_name)] = '\0';// 0, NULL
}
char* Person::getPhone()
{
	return phone;
}
void Person::setPhone(char* _phone)
{
	strncpy(phone, _phone, strlen(_phone));
	phone[strlen(_phone)] = '\0';
}
void Person::showPerson()
{
	printf("name: %s\n", name);
	printf("phone: %s\n", phone);
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
	system("cls");
}