//3. do~while���� �̿��ؼ� 1���� 10���� ���� ����ϼ���
//for���� �̿��ؼ� 1���� 10���� ���� ����ϼ���
#include <stdio.h>

void dowhile3(int i, int num)
{
    int sum = 0;
    do
    {
        sum += i++;

    } while (i <= num);
    printf("\n%d\n", sum);

}

void for3(int i, int num)
{    
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum = sum +i;
        printf("\n%d\n", sum);

}

void main()
{
    dowhile3(0,10);
    for3(1,10);

}