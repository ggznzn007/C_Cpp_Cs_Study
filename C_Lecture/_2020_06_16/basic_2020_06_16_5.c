//5. do~while문을 이용해서 양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요
//for문을 이용해서 양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요

#include <stdio.h>

//int dowhile5()
//{
//	int i = 1;
//	int num;
//	do
//	{
//		printf("양의 정수를 입력하세요 : ");
//		scanf_s("%d", &num); //정수를 입력받기
//	} while (i < num); // 양의 정수로 범위 정하기
//
//		printf("\n감사합니다.\n");// 감사합니다 출력하면서 개행하기
//		
//}

void main()
{
	int num = 0;
	for (int i = 1; i <= num; i++)
	{
		printf("양의 정수를 입력하세요 : ");
		scanf_s("%d", &num);
	}
	printf("\n감사합니다.\n");

}

//void main()
//{
//	dowhile5();
//
//}