#include <stdio.h>

//void main() basic 1
//{
//	int a = 1;
//	while (a <= 100) {
//		printf("%d\n", a);
//		a++;
//	}
//}

//void main() basic 2
//{
//	int a = 10;
//	while (a <= 20) {
//		printf("%d\n", a);
//		a++;
//	}
//}

//void main() basic 3
//{
//    int i = 0, sum = 0;
//    while (i < 10)
//    {
//        i += 1;
//        sum += i; // ������ i ���� �ʱ��� i���� 1�� ���� ��
//        //ex) 1+0 = 1// (0+1)+(1+2)+((1+2)+3)+(((1+2)+3)+4) ...
//    }
//    printf("\n1���� 10������ �� = %d\n", sum);
//}

//void main() basic 4
//{
//    int num = 1;
//
//    while (num < 11)
//    {
//        if (num % 2 == 0)// ������ 2�� ���� �������� 0�̸� 
//        {
//            printf("\n%d\n", num);
//        }
//        num++;
//    }
//    printf("\n");
//
//}

//int main() // basic 5
//{
//    int i, num;// ���� ����
//
//    printf("������ �Է��ϼ��� : ");
//    scanf_s("%d", &num); //������ �Է¹ޱ�
//
//    for (i = 0; i < num; i++) // ���� ������ ���� ���ϱ�
//
//        printf("�����մϴ�.\n");// �����մϴ� ����ϸ鼭 �����ϱ�
//
//    return 0;
//}

//int main()// basic 6
//{
//    int a, b, c;//������ ���� ����
//    int Big; // ���� ū�� ����
//    printf("3���� ������ �Է����ּ��� : \n"); // ���ڿ� ��� �� ����
//    scanf_s("%d %d %d", &a, &b, &c); // Ű���� �Է����� 3���� ���� �Է�
//    if (a >= b) // b���� a�� ũ�ų� ������
//    {
//        Big = a; // ���� ū ���� a
//    }
//    else   //�ƴϸ� b
//        Big = b;
//    if (c > Big)// c�� a,b���� ũ��
//    {
//        Big = c; // c�� ���� ū ��
//    }
//    if (c < Big);// c�� a,b���� ������ a,b �� �� ���� ū �� 
//        
//    printf("\n3���� ���� �� ���� ū ���� %d�Դϴ�.\n", Big);
//    return 0;
//}


int hamsu3(int i, int num) // basic 5
{
    printf("������ �Է��ϼ��� : ");
    scanf_s("%d", &num); //������ �Է¹ޱ�

    for (i = 0; i < num; i++) // ���� ������ ���� ���ϱ�

        printf("�����մϴ�.\n");

    return 0;
}

int main()
{
    hamsu3(0,10);
}
