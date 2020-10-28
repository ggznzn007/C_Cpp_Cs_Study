#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

#define NAME_LEN		20
#define TEL_LEN			20
#define MAX_PERSON_NUM	100

class Person
{
private:
	char name[NAME_LEN];
	char phone[TEL_LEN];
public:
	void ShowMenu()
	{
		cout<<"\n------------- Menu -------------" << endl;
		cout << "	1. Insert " << endl;
		cout << "	2. Delete " << endl;
		cout << "	3. Search " << endl;
		cout << "	4. Print All " << endl;
		cout << "	5. Exit " << endl;
	}

	void InsertTelInfo(Person* par, int* pnum)
	{
		char name[NAME_LEN];
		char phone[TEL_LEN];
		cout << "[ INSERT ] " << endl;
		cout << "Input Name : ";
		cin>> name;
		cout << "Input Tel Number : ";
		cin >> phone;

		strcpy(par[*pnum].name, name);
		strcpy(par[*pnum].phone, phone);
		(*pnum)++;

		cout << "-----------> Data Inserted....."<<endl;
	}

	void DeleteTelInfo(Person* par, int* pnum)
	{
		int i = 0, j = 0;
		char name[NAME_LEN];

		cout << "[ Delete ] "<<endl;
		cout << "Input Name for Removing : ";
		cin>> name;

		for (i = 0; i < *pnum; i++)
		{
			if (strcmp(par[i].name, name) == 0)
			{
				for (j = i + 1; j < *pnum; j++)
				{
					strcpy(par[j - 1].name, par[j].name);
					strcpy(par[j - 1].phone, par[j].phone);
				}
				(*pnum)--;
				return;
			}
		}

		cout << "-------------> Data Not Found.........."<<endl;
	}

	void SearchTelInfo(Person* par, int num)
	{
		int i = 0;
		char name[NAME_LEN];

		cout << "[ Search ] "<<endl;
		cout << "Input Name for Searching : "<<endl;
		cin>> name;

		for (i = 0; i < num; i++)
		{
			if (strcmp(par[i].name, name) == 0)
			{
				cout << "-----> Name : %s	/	Tel : %s ", par[i].name, par[i].phone;
				return;
			}
		}

		cout << "-------------> Data Not Found.........."<<endl;
	}

	void PrintAll(Person* par, int num)
	{
		int i = 0;

		cout << "[ Print All Data ] "<<endl;

		for (i = 0; i < num; i++)
			printf("Name : %s	/	Tel : %s \n", par[i].name, par[i].phone);
	}

};



void main()
{
	void ShowMenu();
	void InsertTelInfo(Person * par, int* pnum);
	void DeleteTelInfo(Person * par, int* pnum);
	void SearchTelInfo(Person * par, int num);
	void PrintAll(Person * par, int num);

	int choice=0;						// 메뉴선택
	int nPersonNum=0;
	Person* perArr=NULL;
	int perNum=0;						// 저장된 인원수
	
	cout<<("저장할 인원수는 몇명입니까? : ");
	scanf_s("%d", &nPersonNum);
	//perArr = (Person*)malloc(nPersonNum*sizeof(Person));
	perArr = new Person[nPersonNum];

	while(1)
	{
		ShowMenu();
		printf("Choose the item : ");
		scanf_s("%d", &choice);

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

