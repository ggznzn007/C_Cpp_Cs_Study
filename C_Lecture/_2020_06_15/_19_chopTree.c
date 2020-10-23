#include <stdio.h>

void main()
{
	int cnt = 1; //cnt++// 나중에 증가, ++cnt;	// 먼저 증가
	printf("나무를 %d번 찍었습니다. 쿵~\n", cnt++);
	printf("나무를 %d번 찍었습니다. 쿵~\n", cnt++);
	printf("나무를 %d번 찍었습니다. 쿵~\n", cnt++);
	printf("나무를 %d번 찍었습니다. 쿵~\n", cnt++);
	printf("나무를 %d번 찍었습니다. 쿵~\n", cnt++);

	printf("나무를 캐었습니다!!\n");

}
