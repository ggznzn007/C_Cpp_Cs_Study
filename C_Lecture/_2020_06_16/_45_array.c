// 배열이 탄생한 이후의 코드
#include <stdio.h>

/*
상수를 사용하는 2가지 목적
1) 상수의 숫자만 바꾸면 상수를 쓰는 전체 코드에 적용가능(오류의 확률 다운)
2) 의미없는 숫자보다 의미있는 단어가 해석하기 좋다(가독성 업)
*/
#define ST_NUM 3 // 상수 선언

void main()
{
	int kor[ST_NUM] = { 0 };// 모두 0으로 초기화
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("%d번째 학생 국어 점수 입력: ", i + 1);
		scanf_s("%d", &kor[i]);
		sum += kor[i];
	}

	avg = (double)sum / ST_NUM;

	printf("총합은 %d입니다\n", sum);
	printf("평균은 %.2lf입니다\n", avg);
}