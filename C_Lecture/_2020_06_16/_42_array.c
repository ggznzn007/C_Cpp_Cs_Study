// �迭�� ź���� ������ �ڵ�
#include <stdio.h>

void main()
{
	int kor[3] = { 0 };// ��� 0���� �ʱ�ȭ
	int sum = 0;
	double avg = 0.0;
	printf("1��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor[0]);
	printf("2��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor[1]);
	printf("3��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor[2]);

	sum = kor[0] + kor[1] + kor[2];
	avg = (double)sum / 3;

	printf("������ %d�Դϴ�\n", sum);
	printf("����� %.2lf�Դϴ�\n", avg);
}