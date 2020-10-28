#include <stdio.h>

// 구조체를 만들 때부터 별명을 짓는다.
typedef struct Student
{
    // 구조체의 멤버변수들
    char name[20];
    int age;
    char address[30];
    float height;
    float weight;
}Stud;

void showStudent(Stud* pSt)
{
    printf("이름 : %s\n", pSt->name);
    printf("나이 : %d\n", pSt->age);
    printf("주소 : %s\n", pSt->address);
    printf("키 : %.2f\n", pSt->height);
    printf("몸무게 : %.2f\n", pSt->weight);
}

void main()
{
    Stud st;

    strcpy_s(st.name, sizeof(st.name), "홍길동");
    st.age = 24;
    strcpy_s(st.address, sizeof(st.address), "지리산");
    st.height = 175.6f;
    st.weight = 78.3f;

    showStudent(&st);
}