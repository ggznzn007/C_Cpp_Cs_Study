//2. do~while문을 이용해서 10부터 20까지 출력하세요
//for문을 이용해서 10부터 20까지 출력하세요
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