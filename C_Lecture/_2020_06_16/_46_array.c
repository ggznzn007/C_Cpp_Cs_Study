// 배열이 탄생한 이후의 코드
#include <stdio.h>

/*상수를 사용하는 2가지 목적
1) 상수의 숫자만 바꾸면 상수를 쓰는 전체
  코드에 적용된다(오류의 확률을 줄여준다)
2) 의미없는 숫자보다 의미있는 단어가
  해석하기 좋다(가독성이 좋아진다)
*/
#define ST_NUM 3

void main()
{
	int kor[ST_NUM] = { 0 };// 모두 0으로 초기화
	int sum = 0;
	double avg = 0.0;

	/* 배열의 길이만큼 반복물을 사용할 때
	배열의 길이를 구해야 한다
	1) 상수로 정의
	2) sizeof(배열이름)/ sizeof(배열[0])
		 sizeof(kor) : 12 byte
		 sizeof(kor[0]) : 4 byte
		 12 / 4 = 3
	*/
	for (int i = 0; i < sizeof(kor) / sizeof(kor[0]); i++)
	{
		printf("%d번째 학생 국어 점수 입력: ", i + 1);
		scanf_s("%d", &kor[i]);
		sum += kor[i];
	}

	avg = (double)sum / ST_NUM;

	printf("총합은 %d입니다\n", sum);
	printf("평균은 %.2lf입니다\n", avg);
}