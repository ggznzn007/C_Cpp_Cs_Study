#include <stdio.h>//삼항연산

void main()
{
    long long int a, b, c;
    scanf_s("%lld %lld %lld", &a, &b, &c);
    printf("%lld", (a < b ? a : b) < c ? (a < b ? a : b) : c);
    //정수 3개 입력받아 가장 작은 수 출력하기
}