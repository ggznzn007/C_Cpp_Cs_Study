//4. do~while���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���
//do~while������ ���ǹ��� �־��ָ� ��
//¦�� ���� if (num % 2 == 0)
#include <stdio.h>

void dowhile4(int num, int goal)
{	
	do
	{
		num++;
		if (num % 2 == 0)// num���� 2�� ���� �������� 0�̸� ���� ��� = �������� ���� ���� ���
			/*continue;*/
		printf("\n%d\n", num);
		if (num == goal)// ��ǥ���� num���� �����ϸ� �ݺ��� ����
			break;
	} while (1);
}

	void main()
	{
		dowhile4(1, 100);
	
	
	}