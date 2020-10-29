#include<stdio.h>

int main(void)
{
    float w, h, result;
    scanf("%f %f", &w, &h);
    result = w * h / 2.0;
    printf("%.1f", result);

    return 0;
}