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

void processWork(int selNum)
{
	if (selNum == 1)
		printf("�Է�ó���Ͽ����ϴ�~\n");
	else if (selNum == 2)
		printf("�˻�ó���Ͽ����ϴ�~\n");
	else if (selNum == 3)
		printf("����ó���Ͽ����ϴ�~\n");
	else if (selNum == 4)
		printf("����ó���Ͽ����ϴ�~\n");
	else if (selNum == 5)
		printf("��ü���ó���Ͽ����ϴ�~\n");
	else if (selNum == 6)
		printf("���α׷� �����ϰڽ��ϴ�~\n");
}

void main()
{
	// getSelnum �Լ��� ������ ������ �ٸ� ����
	int selNum = 0;
	// ����ó�� ���� �� �ٽ� �޴��� ��Ÿ�� �� �ֵ��� ���ѷ���ó��
	while(1)
	{ 
	viewMenu(); // 1. �޴� �����ֱ�
	selNum = getSelnum();// 2. ����� �Է�
	processWork(selNum);// 3. ó��
	}
}