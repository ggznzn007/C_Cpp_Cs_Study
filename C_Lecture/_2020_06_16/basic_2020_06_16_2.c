//2. do~while���� �̿��ؼ� 10���� 20���� ����ϼ���
//for���� �̿��ؼ� 10���� 20���� ����ϼ���
#include <stdio.h>

void dowhile2(int i, int num)
{
	do
	{
		printf("\n%d\n", i);
		i++;
	} while (i < num);

	return 0;
}

void for2(int i, int num)
{
	for (int i = 10; i < num; i++)
	{
		printf("\n%d\n", i);
	}

}

void main()
{
	dowhile2(10, 21);
	for2(10, 21);
}