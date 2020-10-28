//4. do~while문을 이용해서 1부터 10까지 중에 짝수만 출력하세요
//do~while문내에 조건문을 넣어주면 됨
//짝수 조건 if (num % 2 == 0)
#include <stdio.h>

void dowhile4(int num, int goal)
{	
	do
	{
		num++;
		if (num % 2 == 0)// num값을 2로 나눈 나머지가 0이면 값을 출력 = 나머지가 없는 값을 출력
			/*continue;*/
		printf("\n%d\n", num);
		if (num == goal)// 목표까지 num값이 도달하면 반복문 멈춤
			break;
	} while (1);
}

	void main()
	{
		dowhile4(1, 100);
	
	
	}