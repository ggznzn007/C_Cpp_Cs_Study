#include <stdio.h>

void main()
{
	int n, m;
	scanf_s("%d", &n);
	reget: //레이블은 콜론( : ) 으로 끝난다.
	scanf_s("%d", &m);
	printf("%d\n", m);
	if (n-- != 0) goto reget; //reget:으로 이동, n의 값 1만큼 감소
}
