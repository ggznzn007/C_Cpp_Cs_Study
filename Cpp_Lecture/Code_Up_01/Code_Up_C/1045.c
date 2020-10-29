#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d %d\n", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2lf\n", (float)a / b);

}