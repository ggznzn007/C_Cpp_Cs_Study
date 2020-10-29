#include <stdio.h>//조건/선택실행구조

void main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);//짝/홀 출력하기
	if (a % 2 == 0)
	{
		printf("%s\n", "even");
	}
	else {
		printf("%s\n", "odd");
	}
	if (b % 2 == 0)
	{
		printf("%s\n", "even");
	}
	else {
		printf("%s\n", "odd");
	}
	if (c % 2 == 0)
	{
		printf("%s\n", "even");
	}
	else {
		printf("%s\n", "odd");
	}
}