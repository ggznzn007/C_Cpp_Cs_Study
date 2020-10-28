#include <stdio.h>
#include <string.h>

#define NAME_LEN		20
#define TEL_LEN			20
#define MAX_PERSON_NUM	100

struct Person
{
	char name[NAME_LEN];
	char phone[TEL_LEN];
};

void ShowMenu();
void InsertTelInfo(Person* par, int* pnum);
void DeleteTelInfo(Person* par, int* pnum);
void SearchTelInfo(Person* par, int num);
void PrintAll(Person* par, int num);

void main()
{
	int choice=0;						// 메뉴선택
	int nPersonNum=0;
	Person* perArr=NULL;
	int perNum=0;						// 저장된 인원수
	
	printf("저장할 인원수는 몇명입니까? : ");
	scanf("%d", &nPersonNum);
	//perArr = (Person*)malloc(nPersonNum*sizeof(Person));
	perArr = new Person[nPersonNum];

	while(1)
	{
		ShowMenu();
		printf("Choose the item : ");
		scanf("%d", &choice);

		switch(choice)
		{
		case 1 :
			InsertTelInfo(perArr, &perNum);
			break;
		case 2 :
			DeleteTelInfo(perArr, &perNum);
			break;
		case 3 :
			SearchTelInfo(perArr, perNum);
			break;
		case 4 :
			PrintAll(perArr, perNum);
			break;
		case 5 :
			//free(perArr);
			delete [] perArr;
			return;
			break;
		default :
			printf("illegal selection.. \n");
			break;
		}
	}
}

void ShowMenu()
{
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

	strcpy(par[*pnum].name, name);
	strcpy(par[*pnum].phone, phone);
	(*pnum)++;

	printf("-----------> Data Inserted......\n");
}

void DeleteTelInfo(Person* par, int* pnum)
{
	int i=0, j=0;
	char name[NAME_LEN];

	printf("[ Delete ] \n");
	printf("Input Name for Removing : ");
	scanf("%s", name);

	for(i=0;i<*pnum;i++)
	{
		if(strcmp(par[i].name, name)==0)
		{
			for(j=i+1;j<*pnum;j++)
			{
				strcpy(par[j-1].name, par[j].name);
				strcpy(par[j-1].phone, par[j].phone);
			}
			(*pnum)--;
			return;
		}
	}

	printf("-------------> Data Not Found..........\n");
}

void SearchTelInfo(Person* par, int num)
{
	int i=0;
	char name[NAME_LEN];

	printf("[ Search ] \n");
	printf("Input Name for Searching : ");
	scanf("%s", name);

	for(i=0;i<num;i++)
	{
		if(strcmp(par[i].name, name)==0)
		{
			printf("-----> Name : %s	/	Tel : %s \n", par[i].name, par[i].phone);
			return;
		}
	}

	printf("-------------> Data Not Found..........\n");
}

void PrintAll(Person* par, int num)
{
	int i=0;
	
	printf("[ Print All Data ] \n");

	for(i=0;i<num;i++)
		printf("Name : %s	/	Tel : %s \n", par[i].name, par[i].phone);
}
