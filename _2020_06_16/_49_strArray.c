/*문자열 표현*/
#include <stdio.h>

void main()
{
	// '\0' == 0 == NULL
	// 단어의 끝
	// 배열 문자열은 stack메모리에
	// 변수니까 값의 변경 가능
	char sname[6] = { 'k','o','r','e','a','\0'};
	char nname[6] = "korea";
	char name[] = "Korea";
	// 상수 포인터 문자열은 data영역에
	// 못바꾼다. 그냥 사용만 한다
	char* cname = "Corea";
	
	printf("%s\n", sname);
	printf("%s\n", nname);
	printf("%s\n", name);
	printf("%s\n", cname);
}