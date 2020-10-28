#include <stdio.h>
#include <stdlib.h>

void main()
{
	int stNum = 0;
	printf("몇 명 학생의 점수 입력하시겠습니까? ");
	scanf_s("%d", &stNum);

	// malloc할당 후 모두 0으로 초기화
	int* pStScore =
		(int*)calloc(stNum, sizeof(int));
	/*
	int* pStScore =
		(int*)malloc(sizeof(int) * stNum);
	memset(pStScore, 0, sizeof(int) * stNum);
	*/
	for (int i = 0; i < stNum; i++)
	{
		printf("%d 번째 학생 점수 입력: ", i + 1);
		scanf_s("%d", &pStScore[i]);
	}
	for (int i = 0; i < stNum; i++)
		printf("%d: %d점\n", i + 1, pStScore[i]);

	// 메모리 해제
	free(pStScore);

	for (int i = 0; i < stNum; i++)
		printf("%d: %d점\n", i + 1, pStScore[i]);

}