#include <stdio.h>

int main()
{
	int m;

	printf("��(1~12)�Է� : ");
	scanf_s("%d", &m);

	if (m >= 1 && m <= 6)
	{
		printf(">> %d���� ��ݱ� �Դϴ�.", m);
	}
	else if (m >= 7 && m <= 12)
	{
		printf(">> %d���� �Ϲݱ� �Դϴ�.", m);
	}
	else if (m >= 13)
	{
		printf("1~12 ������ ���� �Է����ּ��� \n");
	}
	
}