#include <stdio.h>
#define ST_NUM 10

void score(int eng[10])
{

    for (int i = 0; i < ST_NUM; i++)
    {
        printf("10명의 영어 점수를 입력해주세요. : ");
        scanf_s("%d", &eng[i]);
    }
 
    for (int i = 0; i < ST_NUM; i++)
    {
        printf("%d", eng[i]);

    }
}

void swap(int* num0, int* num1)
{
    int temp = *num0;
    *num0 = *num1;
    *num1 = temp;
}

void array_3(float  eng[10])
{
    float  sum = 0;
    float  avg = 0;

    for (int i = 0; i < ST_NUM; i++)
    {
        printf(" 실수 10개를 입력해 주세요 : ");
        scanf_s("%f", &eng[i]);
        sum += eng[i];
    }
    
    avg = sum / 10;
    printf(" 평균 : %f", avg);
}

void array_ddsdsd()
{

    int i = 0;
    int o = 0;

    for (int j = 0; j < 5; j++)
    {
        printf("i : %d\n", i++); 
        printf("o : %d\n", ++o);

    }
  
}

int array_4(char* eng)
{
    int lenF = 0;
    while (1)
    {
        if( eng[lenF] == '\0')
        {
            break;
        }
        lenF++;
    }
    return lenF;
}

void main()
{
   // int num0 = 10, num1 = 20;
    //int eng_score[10] = { 0 };
    // float  dododo[10] = { 0 };

  //  char* name = "korea";
 //   int len = 0;

  //  score(eng_score);
    //swap(&num0, &num1);
    //printf("%d, %d", num0, num1);
    //array_3(dododo);

    char* name = "korea"; // 
    int len = 0;
    len = array_4(name);
    printf( "%d", len);
}