#include <stdio.h>

void korPresentation() {
	printf("정수를 입력하세요 >> ");
}
void engPresentation() {
	printf("input Integer >> ");
}
int inputValue(void (*present)()) {
	present();
	int num = 0;
	scanf_s("%d", &num);
	return num;
}
void main()
{
	int value = 0;
	value = inputValue(engPresentation);
	printf("%d\n", value);
}