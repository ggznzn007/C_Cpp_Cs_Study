<연산자 우선순위>
1. 먼저 연산하고 싶은 것은 () 묶는다
2. 대입연산자는 우측 연산이 모두 종료되고 마지막에 대입된다.


#include <stdio.h>

void main()
{
	int num0 = 100;
	int num1 = 200;
	int num2 = 2;
	int result = 0;
	result = num0 + num1 / num2;
	printf("%d\n", result);

	int isTrue = (num0 == 100) && num1 == 50;
	
	if (isTrue == 1)
		puts("참입니다.");
	else
		puts("거짓입니다.");

	return 0;

}