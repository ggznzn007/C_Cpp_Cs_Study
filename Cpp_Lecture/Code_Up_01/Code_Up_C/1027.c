#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    int y, m, d;
    scanf_s("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);

}