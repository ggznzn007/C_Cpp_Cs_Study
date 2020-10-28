#include <stdio.h>

void main()
{
	int arr[2][3] = { 0 };

	printf("전체크기: %d\n", sizeof(arr));
	printf("1행크기: %d\n", sizeof(arr[0]));
	printf("2행크기: %d\n", sizeof(arr[1]));
	printf("1개요소: %d\n", sizeof(arr[0][0]));
	
	printf("\n전체시작주소: %d\n", arr);
	printf("1행시작주소: %d\n", arr[0]);
	printf("2행시작주소: %d\n", arr[1]);
	printf("1개요소시작주소: %d\n", &arr[0][0]);
	printf("1개요소: %d\n", arr[0][0]);


}