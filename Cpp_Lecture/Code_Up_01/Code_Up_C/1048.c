#include <stdio.h>// 비트 시프트 연산

void main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a << b);// a<<b == 1 = a 의 b만큼의 거듭제곱

}