/*�������� (global Variable)
1. ���� ���� ���� �ʴ�
2. 0���� �ڵ����� �ʱ�ȭ 
3. ��𼭳� ��밡��
4. ���α׷� ��ü���� ���� ������ ����
5. ������ �̸��� ���������� ������
   ���������� �켱������ ���´�
 */
#include "turboc.h"


int g_EnteNum = 0; // ���� ����

void checkEnter()
{
	printf("VIPS�� �����ϼ̽��ϴ�\n");
	g_EnteNum++;
}

void showMenu()
{
	printf("1. �ֽ���\n");
	printf("2. �ƿ���\n");
	printf("3. VIPS\n");
	printf("4. exit\n");
}

int getSelMenu()
{
	int num = 0;
	printf("\n�����ϼ��� >> ");
	num = getchar() - '0'; // �������� '1' - '0'
	getchar(); // n���� ������ ����
	return num;
}

void main()
{
	while (1)
	{
		clrscr();
		showMenu();
		int sel = getSelMenu();
		if (sel == 3)
			checkEnter();
		else if (sel == 4)
			break;
	}
	printf("VIPS�� ������ ���� %d ���Դϴ�.", g_EnteNum);
}