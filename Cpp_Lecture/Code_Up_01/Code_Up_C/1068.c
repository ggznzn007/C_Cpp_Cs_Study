#include <stdio.h>//조건/선택실행구조

void main()//평가 출력하기
{
    int score;
    scanf_s("%d", &score);

    if (score >= 90) printf("A");
    else if (score >= 70) printf("B");
    else if (score >= 40) printf("C");
    else printf("D");
}