// 3명의 학생이름을 배열을 이용해서 입력하세요
#include <stdio.h>
#include <string.h>

#define ST_NUM 3

void main()
{
	// char[20]배열이 3개 있다
	char names[ST_NUM][20] = { 0 };

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("이름 입력 >> ");
		fgets(names[i], sizeof(names[i]) - 1, stdin);
		names[i][strlen(names[i]) - 1] = 0;
	}

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("%d번째 학생 이름은 %s 입니다\n",
			i + 1, names[i]);
	}
}