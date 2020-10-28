/* 메모리 동적할당
포인터의 3번째 용법
- 힙영역에 할당
- 필요할 때 할당/삭제 마음대로 할 수 있음
- 큰 메모리가 필요할 때
*/
/* 힙메모리 특징
- 우리가 직접 해제하기 전에는 사라지지 않는다
- 필요하면 생성하고 필요없으면 소멸시킬 수 있다
*/
/*
	char name[20]; 일때는
	sizeof(name)은 20이 출력된다.
	컴파일러가 배열로 인식하므로

	char* name = (char*)malloc(sizeof(char) * 20);
	일때는
	sizeof(name)은 4가 출력
	컴파일러가 포인터로 인식하므로
*/
/* 함수 내에서 새로운 저장공간을 할당하기 위해서는
  반드시 힙메모리 할당을 해야 한다
*/
#include <stdio.h>
#include <stdlib.h>

char* getName()
{
	//char* name은 스택의 지역변수
	//malloc은 힙메모리에 sizeof(char)*20만큼 할당해라
	//(char 20개 배열을 힙에 할당해라)

	char* name = (char*)malloc(sizeof(char) * 20);
	printf("이름 입력: ");
	//fgets(name, sizeof(name) - 1, stdin);
	fgets(name, 20 - 1, stdin);
	printf("이름 : %s\n", name);
	printf("name : %p\n", name);
	return name;
}
void main()
{
	char* names[3] = { NULL };
	for (int i = 0; i < 3; i++)
	{
		names[i] = getName();
		printf("pName : %p\n", names[i]);
		printf("이름: %s\n", names[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
		printf("%s\n", names[i]);

	// 힙메모리 해제
	for (int i = 0; i < 3; i++)
		free(names[i]);
}