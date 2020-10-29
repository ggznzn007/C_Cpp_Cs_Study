/* realloc 재할당
- malloc/calloc으로 이미 할당된 공간을 
  늘이거나 줄일 때 사용한다
*/
#include <stdio.h>
#include <stdlib.h>

#define ALLOC_NUM	5

void main()
{
	int i = 0;
	int allocCnt = ALLOC_NUM;
	// 5개 int배열을 힙메모리에 할당한다
	int* pNum = 
		(int*)malloc(sizeof(int) * allocCnt);
	while (i < allocCnt)
	{
		printf("Input Num: ");
		scanf_s("%d", &pNum[i]);
		getchar();
		i++;
		// 더 이상 저장공간이 없을 때
		if (i == allocCnt)
		{
			printf("Memory Full!!!\n");
			printf("Are you sure you want to realloc?\n");
			char ans = getchar();
			if (ans == 'Y' || ans == 'y')
			{
				allocCnt += ALLOC_NUM;
				pNum = (int*)realloc(pNum,sizeof(int) * allocCnt);
			}
			else if (ans == 'N' || ans == 'n')
			{
				for (int j = 0; j < allocCnt; j++)
					printf("%d, ", pNum[j]);
			}
			else
				printf("Invaild Value");

		}
		
	}
	free(pNum);
}