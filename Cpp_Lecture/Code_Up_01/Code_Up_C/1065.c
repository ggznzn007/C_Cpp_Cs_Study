#include <stdio.h>//조건/선택실행구조

void main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);// 짝수일때만 출력하기
	if (a % 2 == 0)
	{
		printf("%d\n", a);
	}
	if (b % 2 == 0)
	{
		printf("%d\n", b);
	}
	if (c % 2 == 0)
	{
		printf("%d\n", c);
	}
}