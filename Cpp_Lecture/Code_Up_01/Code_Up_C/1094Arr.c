#include <stdio.h>


int main()
{
    int i, j, k, a[100];
    scanf_s("%d", &k);

    for (i = 0; i < k; i++)
        scanf_s("%d", &a[i]);

    for (i = k - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
