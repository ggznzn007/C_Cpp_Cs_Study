//6. do~while���� �̿��ؼ� ���� ���� �Է¹ް� �� ����ŭ 3�� ��� ����ϼ���
//���� ��� 5�� �Է¹����� 3 6 9 12 15�� ����ϸ� �˴ϴ�
#include <stdio.h>

void main()
{
	int i = 1;
	int num = 0;
	do
	{
		printf("���� ������ �Է����ּ��� : ");
		scanf_s("%d", &num);
	} while (num == 0);
}