#include <stdio.h>

typedef struct _Student
{
	char name[20];
	char address[30];
	int age;
	float height;
	float weight;
}Student;

void main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "student.bin", "wb");

	Student st = {"홍길동", "지리산 산채",
				24, 174.5f, 75.5f};

	fwrite(&st, sizeof(st), 1, fp);

	fclose(fp);
}