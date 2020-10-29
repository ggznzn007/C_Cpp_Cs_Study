#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void input_nums(int* lotto_nums);
//void print_nums(int* lotto_nums);
//
//int main(void) {
//	int lotto_nums[6];
//
//	input_nums(lotto_nums);
//	print_nums(lotto_nums);
//	
//	return 0;
//}
//
//void input_nums(int* lotto_nums)
//{
//
//}



// 문자열 상수가 주소란 증거
//int main(void) {
//	printf("apple이 저장된 시작 주소 값 : %p\n", "apple"); // 주소 값 출력
//	printf("두번째 문자의 주소 값: %p\n", "apple"+1); // 주소 값 출력
//	printf("첫번째 문자 : %c\n", *"apple");
//	printf("두번째 문자 : %c\n", *("apple"+1));
//	printf("배열로 표현한 세번째 문자 : %c\n", "apple"[2]);
//	
//
//	return 0;
//}



//// 포인터로 문자열을 사용하는 방법
//int main(void) {
//	char* dessert = "apple";
//
//	printf("오늘 디저트는 %s입니다.\n", dessert);
//	dessert = "banana";
//	printf("\n");
//	printf("내일 디저트는 %s 입니다.\n", dessert);
//  while(*dessert != '\0')
//	{
//		putchar(*dessert);
//		dessert++;
//	}
//
//	return 0;
//}



// scanf 함수를 사용한 문자열 입력
//int main(void) {
//	char str[80];
//
//	printf("문자열 입력 : ");
//	scanf("%s", &str);					// %s를 사용하고 배열명을 준다.
//	printf("첫 번째 단어 : %s\n", str); // 배열에 입력된 문자열 출력
//	scanf("%s", &str);
//	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str); 
//
//
//	return 0;
//}



// gets 함수로 한 줄의 문자열 입력방법
//int main(void) {
//	char str[80];
//
//	printf("공백이 포함된 문자열 입력 : ");
//	gets(str);
//	printf("입력한 문자열은 %s입니다.", str);
//
//	return 0;	
//}


// fgets 함수의 문자열 입력 방법
//int main(void) {
//	char str[80];
//
//	printf("공백이 포함된 문자열 입력 : ");
//	fgets(str, sizeof(str), stdin);
//
//	printf("입력된 문자열은 %s 입니다.\n", str);
//
//	return 0;
//
//}



// 문자열을 출력하는 puts와 fputs 함수
//int main(void) {
//	char str[80] = "apple juice"; // 배열에 문자열 초기화
//	char* ps = "banana"; // 포인터에 문자열 연결
//
//	puts(str);				// apple juice 출력하고 줄 바꿈
//	fputs(ps, stdout);		// banana만 출력
//	puts("milk");			// banana에 이어 milk 출력
//
//
//	return 0;
//}



// 직접 구현해보는 gets 함수
//int main(void) {
//	int i = 0;		// 배열 요소 첨자 변수
//	char str[20];	// 문자열을 저장할 배열
//	char ch;		// 입력하 문자들 받아둘 임시 변수
//
//	do				// do while 문이니 실행 후 조건을 검사합니다.
//	{
//		ch = getchar();	// 일단 문자 하나 입력
//		str[i] = ch; // 배열에 저장
//		i++;		// 첨자 증가
//
//	} while (ch != '\n'); // 입력한 문자가 개행이면 종료
//
//	str[i] = '\0'; // 개행 문자가 입력된 위치에 널 문자 저장 
//	//printf("%s",str);
//
//	return 0;
//}



int main(void) {





	return 0;
}