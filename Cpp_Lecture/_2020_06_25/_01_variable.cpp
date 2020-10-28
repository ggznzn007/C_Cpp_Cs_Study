// 1.변수의 선언위치
/* 원래 C언어 문법에서 변수의 위치는
  지역{ 가 시작된 후 선언해야만 한다.
  그런데 C++은 자유롭게 선언할 수 있게 바꿨다.
  변수에 num처럼 계속 사용되는 변수가 있고
  i처럼 임시로 사용하는 변수가 있다

  코드를 함수로 분리할 때 임시로 사용하는 
  변수는 가까이 있는 것이 편리하다

  C: '\n' , Unix/Linux '\n'
  Windows: "\r\n"
  Mac: '\r'

  binary : os와 관계없이 그대로저장/로딩
  text   : Windows "\r\n" -> '\n'
           Mac '\r' -> '\n'
		   Unix/Linux '\n' -> '\n'
*/
#include <stdio.h>

void main()
{
	int num = 0;
	//int i = 0;

	printf("반복 회수 입력: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
		printf("%d ", i);
	printf("\n");
}
