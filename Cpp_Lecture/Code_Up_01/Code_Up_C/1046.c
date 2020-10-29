#include <stdio.h>

void main()
{
	long long int a, b, c;
	scanf_s("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a + b + c);
	printf("%.1f\n", (float)(a + b + c) / 3);
}