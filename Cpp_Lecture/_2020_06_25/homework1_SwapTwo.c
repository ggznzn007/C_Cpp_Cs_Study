#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SwapTwo(int* num0, int* num1)
{
	int temp = *num0;
	*num0 = *num1;
	*num1 = temp;
	printf("\n %d, %d \n", *num0, *num1);//林家蔼
}

void main()
{
	int num0 = 10, num1 = 20;
	SwapTwo(&num0,&num1);
	//printf("\n %d, %d \n", &num0, &num1);//林家蔼	
}