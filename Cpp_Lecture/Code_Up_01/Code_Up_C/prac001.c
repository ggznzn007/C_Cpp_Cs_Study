#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)// 단어 1개 입력 받아 나누어 출력하기   
{
	int i;// 단어 1개를 변수명으로 지정
	char n[21];// 문자열을 변수로 하는 배열을 지정
	scanf_s("%s", &n);// 키보드 입력으로 문자열을 입력받음
	for (i = 0; n[i] !='\0'; i++) {
	printf("\'%c\'\n", n[i]);// 작은따옴표와 문자열 작은따옴표 순으로 출력
	}
	return 0;
}


//int main(void)// 실수 1개 입력받아 부분별로 출력하기
//{
//    int a, b = 0;
//
//    scanf_s("%d.%d", &a, &b);
//    printf("%d\n%d", a, b);
//
//    return 0;
//}

//int main(void)// 문장1개 입력받아 그대로 출력하기
//{
//    char data[2001] = "";
//    fgets(data, 2000, stdin);
//    printf("%s", data);
//
//    return 0;
//}

//int main(void) { // 단어 1개 입력받아 그대로 출력하기
//
//    char data[51] = "";
//
//    scanf_s("%s", &data);
//    printf("%s", data);
//
//
//
//    return 0;
//}

//int main(void) { // 주민번호 입력받아 형태바꿔 출력하기
//
//    int a, b;
//
//    scanf_s("%d-%d", &a, &b);
//    printf("%06d%07d", a, b);
//
//
//
//    return 0;
//}

//int main(void) { // 연,월,일 입력받아 그대로 출력하기
//
//    int y, m, d;
//
//    scanf_s("%d.%d.%d", &y, &m, &d);
//    printf("%d.%02d.%02d", y, m, d);
//
//    return 0;
//}

//int main(void) { // 시간 입력 받아 그대로 출력하기
//
//    int h, m;
//
//    scanf_s("%d:%d", &h, &m);
//    printf("%d:%d ", h, m);
//
//    return 0;
//}

//int main(void) { // 정수1개입력 받아 3번 출력하기
//
//    int a;
//
//    scanf_s("%d", &a);
//    printf("%d %d %d", a, a, a);
//
//    return 0;
//}

//int main(void) { // 실수 1개 입력받아 소수점 둘째다리까지 출력하기
//
//    float a;
//
//    scanf_s("%f", &a);
//    printf("%.2f", a);
//
//    return 0;
//}

//int main() {//정수 2개입력받아 그대로 출력하기
//	int a = 1;
//	int b = 2;
//	scanf_s("%d%d", &a, &b);  //엔터/공백으로 입력 데이터가 구분되어 입력
//	printf("%d %d", a, b);
//
//	return 0;
//}

//int main() {// 실수 1개 입력받아 출력하기
//	float x;
//	scanf_s("%f", &x);
//	printf("%f", x);
//
//	return 0;
//}

//int main() { // 문자 1개 입력받아 출력하기
//	char p;
//	scanf_s("%c", &p);
//	printf("%c", p);
//
//	return 0;
//}

//int main()// 정수형 변수 하나 입력 받아 출력하기
//{
//    int n = 15 ;
//    scanf_s("%d", &n);
//    printf("%d", n);
//
//    return 0;
//}

//int main(void) { // 문자열 특수문자 출력하기
//	printf("\u250C\u252C\u2510\n");
//	printf("\u251C\u253C\u2524\n");
//	printf("\u2514\u2534\u2518\n");
//	return 0;
//}

//int main(void) {
//	printf("┌┬┐\n");
//	printf("├┼┤\n");
//	printf("┗┷┘\n");
//	return 0;
//}