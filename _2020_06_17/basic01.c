//1. 10�� ���� �Է� �� �ִ� �ּ� ���� ����� ���ϼ���.

#include <stdio.h>

void main()
{
    int i;
    int a[10];
    int sum = 0;
    int max;
    int min;
    printf("\n10���� ������ �Է��ϼ���.\n\n");
    for (i = 0; i <= 9; i++)
    {
        scanf_s("%d", &a[i]);
        sum += a[i]; /*sum= sum+a[i];*/
    }
    for (max = a[0], min = a[0], i = 1; i <= 9; i++)
    {
        if (max < a[i])
            max = a[i];

        if (min > a[i])
            min = a[i];
    }

    printf("\n�ִ밪 = %d\n�ּҰ� = %d\n���� = %d\n��� = %.1f\n", max, min, sum, sum / 10.f);
}