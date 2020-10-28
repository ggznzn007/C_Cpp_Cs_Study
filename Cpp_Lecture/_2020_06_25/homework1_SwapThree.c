#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SwapThree(int *num0, int *num1,int *num2)
{	
	int temp;
	temp = *num2;
	*num2 = *num1;
	*num1 = *num0;
	*num0 = temp;
	printf("\n %d, %d, %d\n", *num0,*num1,*num2);//ÁÖ¼Ò°ª
	
}

void main()
{
	int num0 = 10, num1 = 20, num2 = 30;
	SwapThree(&num0,&num1,&num2);


}