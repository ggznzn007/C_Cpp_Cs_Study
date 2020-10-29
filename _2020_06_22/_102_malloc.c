#include <stdio.h>
#include <stdlib.h>

void main()
{
	int stNum = 0;
	printf("몇 명 학생의 점수 입력하시겠습니까? ");
	scanf_s("%d", &stNum);

	// (동적)배열의 시작주소를 가리키는 포인터 변수
	// 힙메모리에 stNum크기의 int배열이 생성
	// pStScore가 배열의 시작주소를 가리킨다
	int* pStScore =
		(int*)malloc(sizeof(int) * stNum);

	for (int i = 0; i < stNum; i++)
	{
		printf("%d 번째 학생 점수 입력: ", i+1);
		scanf_s("%d", &pStScore[i]);
	}
	for (int i = 0; i < stNum; i++)
		printf("%d: %d점\n", i + 1, pStScore[i]);

	// 메모리 해제
	free(pStScore);
}