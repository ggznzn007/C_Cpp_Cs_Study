// �迭�� ź���� ������ �ڵ�
#include <stdio.h>

/*����� ����ϴ� 2���� ����
1) ����� ���ڸ� �ٲٸ� ����� ���� ��ü
  �ڵ忡 ����ȴ�(������ Ȯ���� �ٿ��ش�)
2) �ǹ̾��� ���ں��� �ǹ��ִ� �ܾ
  �ؼ��ϱ� ����(�������� ��������)
*/
#define ST_NUM 3

void main()
{
	int kor[ST_NUM] = { 0 };// ��� 0���� �ʱ�ȭ
	int sum = 0;
	double avg = 0.0;

	/* �迭�� ���̸�ŭ �ݺ����� ����� ��
	�迭�� ���̸� ���ؾ� �Ѵ�
	1) ����� ����
	2) sizeof(�迭�̸�)/ sizeof(�迭[0])
		 sizeof(kor) : 12 byte
		 sizeof(kor[0]) : 4 byte
		 12 / 4 = 3
	*/
	for (int i = 0; i < sizeof(kor) / sizeof(kor[0]); i++)
	{
		printf("%d��° �л� ���� ���� �Է�: ", i + 1);
		scanf_s("%d", &kor[i]);
		sum += kor[i];
	}

	avg = (double)sum / ST_NUM;

	printf("������ %d�Դϴ�\n", sum);
	printf("����� %.2lf�Դϴ�\n", avg);
}