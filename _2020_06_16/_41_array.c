/* �迭(¦, �ټ��ִ�)
1) �뵵
	ex) �������� 3�� �л� �Է�
	int kor0, int kor1,int kor2;
		�������� 1000�� �л��Է�
	int kor[1000];
	int ������ 1000�� �ټ��ִ�
	kor[0], kor[1], kor[2],...kor[999]	- index([0])�� ������ ġȯ
	
*/

#include <stdio.h>

// �迭�� ź���ϱ� ������ �ڵ�
void main()
{
	int kor0 = 0, kor1 = 0, kor2 = 0 ;
	int sum = 0;
	double avg = 0.0;
	printf("1��° �л� ���� ���� �Է�:");
	scanf_s("%d", &kor0);
	printf("2��° �л� ���� ���� �Է�:");
	scanf_s("%d", &kor1);
	printf("3��° �л� ���� ���� �Է�:");
	scanf_s("%d", &kor2);
	
	sum = kor0 + kor1 + kor2;
	// ������ ������ ������ ����� ����
	// 275/3 => 275.0/3 => �Ҽ��� ����
	// sumdmf int -> double�� ����ȯ
	avg = (double)sum / 3;

	printf("������ %d�Դϴ�.\n", sum);
	printf("����� %.2lfd�Դϴ�.\n", avg);

	
}