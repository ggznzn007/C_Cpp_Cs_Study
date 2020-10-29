#include <stdio.h>


int main(void)
{

    int num1;
replay:
    scanf_s("%d", &num1);

    if (num1 != 0) {
        printf("%d\n", num1);
        goto replay;

    }

    return 0;
}