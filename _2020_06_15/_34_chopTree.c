//1. ���ڸ� �Է¹ް�, ���ڸ�ŭ "������ ��������".
//�� ������ "������ ĳ����"	���
//
//2. 1���� �Լ��� ����� �Լ��� ���ڸ� �����ϸ�
//"������ ��´�"�� �ݺ��ϼ���.
//�� ������ "������ ĳ����" ���
//3. �Լ��� ���� 1��° ���ڴ� �ݺ�ȸ��,
//2��° ���ڴ� �ش��° ���� "��"�� ���
//ex) chopTree(10, 3);
//"������ �����"
//"������ �����"
//"������ �����"
//"��"

#include <stdio.h>

void cutTree(int tryagain) {
	int cnt = 0;
	int n;
	
	//for (cnt = 1; cnt <= n; ++cnt)
	for (cnt = 1; cnt <= tryagain; ++cnt)
	{
		
		printf("\n������ �� �� �������?\n", cnt);
		scanf_s("%d", &cnt,&n);
		printf("\n");		
		printf("������ ������ϴ�. ��!\n", cnt);
		printf("\n");
		
		if (cnt == tryagain) {
			printf("��! ������ �������ϴ�!!!\n");
			printf("\n");
		}
		else if (cnt < tryagain) {
			printf("������ ���� ���߽��ϴ�.\n");
		}
	}
}

void main()
{
	cutTree(15);
	
}