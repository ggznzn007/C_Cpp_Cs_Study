#include <stdio.h>

void main()
{
	int result = 0;
	for (int i = 1; i <= 10; i++)
	{
		result += i;	
	}
	printf("결과는 %d 입니다.\n", result);
}