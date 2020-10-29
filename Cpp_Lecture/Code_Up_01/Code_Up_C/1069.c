#include <stdio.h>//조건/선택실행구조

void main()//평가 입력받아 다르게 출력하기
{
    char i;
    scanf_s("%c", &i);
    switch (i) {
    case 'A': printf("best!!!");
        break;

    case 'B': printf("good!!");
        break;

    case 'C': printf("run!");
        break;

    case 'D': printf("slowly~");
        break;

    default: printf("what?");
        break;
    }
    
}