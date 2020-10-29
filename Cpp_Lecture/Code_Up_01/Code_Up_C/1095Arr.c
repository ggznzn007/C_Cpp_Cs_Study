#include <stdio.h>

int main()
{
    int n;
    int getNum;
    int minNum = 23;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &getNum);
        if (getNum < minNum) {
            minNum = getNum;
        }
    }
    printf("%d\n", minNum);
    return 0;
}