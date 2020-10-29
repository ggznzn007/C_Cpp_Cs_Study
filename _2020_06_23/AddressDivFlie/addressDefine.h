#pragma once

#define ADDR_LEN	10

#define INSERT_ADDR		1
#define PRINTALL_ADDR	2
#define EXIT_PROGRAM	3

typedef struct _Address
{
	char name[20];
	char address[30];
	int age;
}Address;

