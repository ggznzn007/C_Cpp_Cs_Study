#include <stdio.h>
#include <conio.h>
// �ڵ�����
//1. ��ü���� �� 
//2. ctrl + k , f
void main()
{
	while (1)
	{
		printf("1. �ּ� �Է�\n");
		printf("2. �ּ� �˻�\n");
		printf("3. �ּ� ����\n");
		printf("4. �ּ� ����\n");
		printf("5. ���α׷� ����\n");

		printf("��ȣ�� �����ϼ��� >>\n");
		char sel = _getch(); // ���ڸ�
		printf("%c �� �����ϼ̽��ϴ�.\n", sel);
		if (sel == '5'); {
			printf("�ȳ��� �輼�� ^^\n");
			break; // ���� ������ �ִ� �ݺ����� Ż���϶�
		}
		else
		{
			printf("������ ó���Ͽ����ϴ�~\n");
			printf("***************************\n\n");
		}

	}


	return 0;
}