// �迭�� ź���� ������ �ڵ�
#include <stdio.h>

void main()
{
	int kor[3] = { 0 };// ��� 0���� �ʱ�ȭ
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < 3; i++)
	{
		printf("1��° �л� ���� ���� �Է�: ", i+1);
		scanf_s("%d", &kor[i]);
	}
	
	
	sum = kor[0] + kor[1] + kor[2];
	avg = (double)sum / 3;

	printf("������ %d�Դϴ�\n", sum);
	printf("����� %.2lf�Դϴ�\n", avg);
}