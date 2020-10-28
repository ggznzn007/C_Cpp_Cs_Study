#include <stdio.h>
#include <string.h>

void main()
{
	char name[20] = { 0 };

	printf("이름 입력: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	printf("입력한 이름은 %s 입니다\n", name);
}