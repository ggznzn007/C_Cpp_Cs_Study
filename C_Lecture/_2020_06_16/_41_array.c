/* 배열(짝, 줄서있다)
1) 용도
	ex) 국어점수 3명 학생 입력
	int kor0, int kor1,int kor2;
		국어점수 1000명 학생입력
	int kor[1000];
	int 변수가 1000개 줄서있다
	kor[0], kor[1], kor[2],...kor[999]	- index([0])를 변수로 치환
	
*/

#include <stdio.h>

// 배열이 탄생하기 이전의 코드
void main()
{
	int kor0 = 0, kor1 = 0, kor2 = 0 ;
	int sum = 0;
	double avg = 0.0;
	printf("1번째 학생 국어 점수 입력:");
	scanf_s("%d", &kor0);
	printf("2번째 학생 국어 점수 입력:");
	scanf_s("%d", &kor1);
	printf("3번째 학생 국어 점수 입력:");
	scanf_s("%d", &kor2);
	
	sum = kor0 + kor1 + kor2;
	// 정수와 정수의 연산의 결과는 정수
	// 275/3 => 275.0/3 => 소수점 가능
	// sumdmf int -> double로 형변환
	avg = (double)sum / 3;

	printf("총합은 %d입니다.\n", sum);
	printf("평균은 %.2lfd입니다.\n", avg);

	
}