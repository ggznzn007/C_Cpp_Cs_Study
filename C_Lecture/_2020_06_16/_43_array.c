// 배열이 탄생한 이후의 코드
#include <stdio.h>

void main()
{
	int kor[3] = { 0 };// 모두 0으로 초기화
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < 3; i++)
	{
		printf("1번째 학생 국어 점수 입력: ", i+1);
		scanf_s("%d", &kor[i]);
	}
	
	
	sum = kor[0] + kor[1] + kor[2];
	avg = (double)sum / 3;

	printf("총합은 %d입니다\n", sum);
	printf("평균은 %.2lf입니다\n", avg);
}