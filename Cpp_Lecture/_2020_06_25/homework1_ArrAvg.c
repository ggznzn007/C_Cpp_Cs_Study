#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Arr 10

void main() 
{
	double arr[Arr] = { 1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.1,9.5 };
    int i;
    double sum = 0;

    for (i = 0; i <= Arr; i++)
        sum += arr[i];

    i = sum / Arr;

    printf("ЦђБе %lf \n", i);
}