#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {//시분초 입력받아 분만 출력하기
	int h, m, s;
	scanf_s("%d:%d:%d", &h, &m, &s);
	printf("%d", m);

	return 0;
}