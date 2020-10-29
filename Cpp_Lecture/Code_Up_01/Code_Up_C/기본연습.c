#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main()
{
	int a;
	int b;
	int c;
	while(1)
	for (int a = 1; a <= 50; ++a) {// a의 초기값은 1이고, 50까지 1씩 증가한다
		for (int b = 3; b <= 40; ++b) { // b의 초기값은 2이고, 40까지 1씩 증가한다
			for (int c = 5; c <= 30; ++c) {// c의 초기값은 3이고, 30까지 1씩 증가한다
				if (a != b && c != a) {
					printf("%♥사랑해♥   ", a,b,c);
					
				}
			}	printf("\n");
		}	printf("\n");
	}	printf("\n");

	return 0;
}
