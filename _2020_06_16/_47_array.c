/* 난수랑(random number)
; 임의의 수
1) 카드, 화투, 주사위 
  무작위 숫자가 필요하다
  - 카드 : 52 + 조커 2장 
         0이상 ~ 54미만의 임의의 수 필요
  - 화투 : 48
         0이상 ~ 48미만의 임의의 수 필요
  - 주사위: 6
         0이상 ~ 6미만의 임의의 수 필요
2) 적과 나의 전투 : 턴 게임
   적이 나를 공격 : 0 ~ 10사이의 피해
   내가 적을 공격 : 0 ~ 10사이의 피해
3) c언어에서 난수를 생성하는 단계
   a. 난수초기화
       수학공식에 의해 만들어지는 수
	   시간 변수를 적용시킨다(같은 시간은 없다)
	   a.1 srand((unsigned)time(NULL));
	   a.2 randomize();
   b. 난수생성
       범위
	   rand() % (n)
	   random(n)
	   random(10) : 0이상 ~ 10미만 난수발생
*/
/* Ctrl + F5 : 빌드
 1) 전처리 : 치환
 2) 컴파일 : 기계어로 변환
 3) 링크   : 외부라이브러리 연결
 => 실행파일
*/
#include "turboc.h"

#define ST_NUM 100

void main()
{
	int kor[ST_NUM] = { 0 };// 모두 0으로 초기화
	int sum = 0;
	double avg = 0.0;

	randomize();	// 난수 초기화
	for (int i = 0; i < sizeof(kor) / sizeof(kor[0]); i++)
	{
		//printf("%d번째 학생 국어 점수 입력: ", i + 1);
		kor[i] = random(101);
		sum += kor[i];

		printf("%02d ", kor[i]);
		if (i % 10 == 9)
			printf("\n");
	}

	avg = (double)sum / ST_NUM;

	printf("총합은 %d입니다\n", sum);
	printf("평균은 %.2lf입니다\n", avg);
}