#define _CRT_SECURE_NO_WARNINGS
#include "Divtelinfo.h"



void main()
{
	int choice = 0;						// �޴�����
	int nPersonNum = 0;

	Person* perArr = NULL;
	int perNum = 0;						// ����� �ο���

	printf("������ �ο����� ����Դϱ�? : ");
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

