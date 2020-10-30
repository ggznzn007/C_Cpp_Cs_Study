#include <stdio.h>

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
void main()
{
	// 함수 포인터 변수 선언
	int (*calc)(int a, int b);
	calc = add;
	printf("%d\n", calc(10, 20));
	calc = sub;
	printf("%d\n", calc(10, 20));
}