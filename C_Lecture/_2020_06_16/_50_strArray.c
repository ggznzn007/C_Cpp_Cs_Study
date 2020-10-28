/*문자열 표현*/
#include <stdio.h>

void main()
{
	char sname[6] = { 'k','o','r','e','a','\0' };
	char nname[6] = "korea";
	char name[] = "Korea";
	char* cname = "Corea";

	// 배열의 이름은 배열 시작위치
	printf("%#x\n\n", sname);

	// 시작주소를 기준으로 '\0'을 만날때까지 읽는다
	printf("%s\n", sname);
	printf("%s\n", nname);
	printf("%s\n", name);
	printf("%s\n", cname);
	printf("\n");

	sname[0] = nname[0] = name[0] = 'C';
	printf("%s\n", sname);
	printf("%s\n", nname);
	printf("%s\n", name);

	cname[0] = 'K';
	printf("%s\n", cname);
}