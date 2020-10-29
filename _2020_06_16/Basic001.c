#include <stdio.h>

//void main() basic 1
//{
//	int a = 1;
//	while (a <= 100) {
//		printf("%d\n", a);
//		a++;
//	}
//}

//void main() basic 2
//{
//	int a = 10;
//	while (a <= 20) {
//		printf("%d\n", a);
//		a++;
//	}
//}

//void main() basic 3
//{
//    int i = 0, sum = 0;
//    while (i < 10)
//    {
//        i += 1;
//        sum += i; // 현재의 i 값은 초기의 i값에 1을 더한 값
//        //ex) 1+0 = 1// (0+1)+(1+2)+((1+2)+3)+(((1+2)+3)+4) ...
//    }
//    printf("\n1부터 10까지의 합 = %d\n", sum);
//}

//void main() basic 4
//{
//    int num = 1;
//
//    while (num < 11)
//    {
//        if (num % 2 == 0)// 변수를 2로 나눈 나머지가 0이면 
//        {
//            printf("\n%d\n", num);
//        }
//        num++;
//    }
//    printf("\n");
//
//}

//int main() // basic 5
//{
//    int i, num;// 변수 선언
//
//    printf("정수를 입력하세요 : ");
//    scanf_s("%d", &num); //정수를 입력받기
//
//    for (i = 0; i < num; i++) // 양의 정수로 범위 정하기
//
//        printf("감사합니다.\n");// 감사합니다 출력하면서 개행하기
//
//    return 0;
//}

//int main()// basic 6
//{
//    int a, b, c;//세가지 변수 선언
//    int Big; // 가장 큰수 선언
//    printf("3개의 정수를 입력해주세요 : \n"); // 문자열 출력 후 개행
//    scanf_s("%d %d %d", &a, &b, &c); // 키보드 입력으로 3개의 정수 입력
//    if (a >= b) // b보다 a가 크거나 같으면
//    {
//        Big = a; // 가장 큰 수는 a
//    }
//    else   //아니면 b
//        Big = b;
//    if (c > Big)// c가 a,b보다 크면
//    {
//        Big = c; // c가 가장 큰 수
//    }
//    if (c < Big);// c가 a,b보다 작으면 a,b 둘 중 가장 큰 수 
//        
//    printf("\n3개의 정수 중 가장 큰 수는 %d입니다.\n", Big);
//    return 0;
//}


int hamsu3(int i, int num) // basic 5
{
    printf("정수를 입력하세요 : ");
    scanf_s("%d", &num); //정수를 입력받기

    for (i = 0; i < num; i++) // 양의 정수로 범위 정하기

        printf("감사합니다.\n");

    return 0;
}

int main()
{
    hamsu3(0,10);
}
