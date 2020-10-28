#include<iostream>
void main()
{
	int num1 = 0;
	printf("정수입력: ");
	scanf_s("%d", &num1);

	int num2 = 0;
	printf("정수입력: ");
	scanf_s("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
}