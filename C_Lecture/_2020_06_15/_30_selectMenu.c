#include <stdio.h>

void viewMenu()
{
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է�\n");
	printf("2. �˻�\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ��ü���\n");
	printf("6. ����\n");
}

int getSelnum()
{
	int selNum = 0;
	printf("\n��ȣ�� �����ϼ��� >> ");
	//scanf("%d", &selNum);	// ���ۿ����÷ο쿡 ���
	scanf_s("%d", &selNum);	// �Ʒ�ó�� �ٲ��.
	//scanf_s("%d", &selNum, sizeof(selNum));

	return selNum; // ���Լ��� ��ó���� ������ ������ ���ư� ��
					// �� ���� �ڷ����� �Լ������� �ۼ�
}

void inputAddress()
{
	printf("�Է�ó���Ͽ����ϴ�~\n");
}
void searchAddress()
{
	printf("�˻�ó���Ͽ����ϴ�~\n");
}
void updateAddress()
{
	printf("����ó���Ͽ����ϴ�~\n");
}
void deleteAddress()
{
	printf("����ó���Ͽ����ϴ�~\n");
}
void printAllAddress()
{
	printf("��ü���ó���Ͽ����ϴ�~\n");
}
void exitApp()
{
	printf("���α׷� �����ϰڽ��ϴ�~\n");
}

void processWork(int selNum)
{
	switch (selNum)
	{
		case 1 :
			inputAddress();
			break;
		case 2:
			searchAddress();
			break;
		case 3:
			updateAddress();
			break;
		case 4:
			deleteAddress();
			break;
		case 5:
			printAllAddress();
			break;
		case 6:
			exitApp();
			break;
		default:printf("�߸��Է��Ͽ����ϴ�.\n");

	}
}

void main()
{
	// getSelnum �Լ��� ������ ������ �ٸ� ����
	int selNum = 0;
	// ����ó�� ���� �� �ٽ� �޴��� ��Ÿ�� �� �ֵ��� ���ѷ���ó��
	while (1)
	{
		viewMenu(); // 1. �޴� �����ֱ�
		selNum = getSelnum();// 2. ����� �Է�
		processWork(selNum);// 3. ó��
	}
}