#include <stdio.h>//비트단위논리연산

void main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a ^ b);//비트단위로 XOR 하여 출력하기
}