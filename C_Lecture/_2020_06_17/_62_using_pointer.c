#include <stdio.h>

int div(int num0, int num1)
{
	return num0 / num1;
}

void main()
{
	printf("10/3의 몫은 %d입니다\n", div(10, 3));
}