//#include <stdio.h>

//1. 10개 정수 입력 후 최대 최소 총합 평균을 구하세요.
//void inputArrayNums(int arrNums[], int len) 
//void inputArrayNums(int* arrNums, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d/10 번째 숫자 입력 : ", i + 1);
//		scanf_s("%d", &arrNums[i]);
//	}
//}
//int maxNums(int* arrNums, int len)
//{
//	int max = arrNums[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (max < arrNums[i])
//			max = arrNums[i];
//	}
//	return max;
//}
//int minNums(int* arrNums, int len) 
//{
//	int min = arrNums[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (min > arrNums[i])
//			min = arrNums[i];
//	}
//	return min;
//}
//int sumNums(int* arrNums, int len) 
//{
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum += arrNums[i];
//	}
//	return sum;
//}
//double avgNums(int* arrNums, int len) 
//{
//	int sum = sumNums(arrNums, len);
//	double avg = (double)sum / len;
//	return avg;
//}
// 
//void main()
//{
//	int nums[10] = { 0 };
//	int max = 0, min = 0, sum = 0;
//	double avg = 0.0;
//	int arrLen = sizeof(nums) / sizeof(nums[0]);
//
//	inputArrayNums(nums, arrLen);
//
//	max = maxNums(nums, arrLen);
//	printf("가장 큰 값은 %d입니다\n", max);
//
//	min = minNums(nums, arrLen);
//	printf("가장 작은 값은 %d입니다\n", min);
//
//	sum = sumNums(nums, arrLen);
//	printf("총합은 %d입니다\n", sum);
//	
//	avg = avgNums(nums, arrLen);
//	printf("평균은 %.2lf입니다\n", avg);
//}


//3. 사용자로부터 초를 입력받은 후 이를[시, 분, 초]의
//형태로 출력하는 프로그램을 작성하세요.
// 포인터를 사용
//1) 입력 함수
//2) 시간 계산
//3) 출력 함수
//#include <stdio.h>
//
//#define IN
//#define OUT
//
//int inputSec()
//{
//	int sec = 0;
//	printf("초를 입력하세요: ");
//	scanf_s("%d", &sec);
//	return sec;
//}
//
//void calcTime(IN int srcSec, OUT int* pHour,
//			OUT int* pMin, OUT int* pSec)
//{
//	int hour = 0, min = 0, sec = 0;
//	// 3662	=> 1시간 1분 2초
//	sec = srcSec % 60;	// 2초
//	min = srcSec / 60;	// 61분
//	hour = min / 60;	// 1시간
//	min = min % 60;		// 1분
//
//	// 결과값 전달
//	*pHour = hour;
//	*pMin = min;
//	*pSec = sec;
//}
//
//void viewTime(int hour, int min, int sec)
//{
//	printf("[%02d 시간: %02d 분: %02d 초]\n",
//		hour, min, sec);
//}
//
//void main()
//{
//	int iSec = 0;
//	int hour = 0, min = 0, sec = 0;
//	while (1)
//	{
//		iSec = inputSec();
//		calcTime(iSec, &hour, &min, &sec);
//		viewTime(hour, min, sec);
//	}
//}


//6. 반드시 A를 이용해서 B의 값을 채우도록 하세요
//// 배열 A, B를 선언
//int A[2][4] = { 1,2,3,4,5,6,7,8 };
//int B[4][2] = { 0 };
//
//A                B
//1 2 3 4          1 5
//5 6 7 8          2 6
//				   3 7
//				   4 8
//#include <stdio.h>
//
//void main()
//{
//	int A[2][4] = { 1,2,3,4,5,6,7,8 };
//	int B[4][2] = { 0 };
//
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 4; j++)
//			B[j][i] = A[i][j];
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d ", B[i][j]);
//		}
//		printf("\n");
//	}
//}

//6. 반드시 A를 이용해서 B의 값을 채우도록 하세요
//// 배열 A, B를 선언
//int A[2][4] = { 1,2,3,4,5,6,7,8 };
//int B[4][2] = { 0 };
//
//A                B
//1 2 3 4          1 2
//5 6 7 8          3 4
//				   5 6
//				   7 8
#include <stdio.h>

void main()
{
	int A[2][4] = { 1,2,3,4,5,6,7,8 };
	int B[4][2] = { 0 };
	int* ptr = &B[0][0];
	int cnt = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ptr[cnt++] = A[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
}