//6. do~while문을 이용해서 양의 정수 입력받고 그 수만큼 3의 배수 출력하세요
//예를 들어 5를 입력받으면 3 6 9 12 15를 출력하면 됩니다
#include <stdio.h>

void main()
{
	int i = 1;
	int num = 0;
	do
	{
		printf("양의 정수를 입력해주세요 : ");
		scanf_s("%d", &num);
	} while (num == 0);
}