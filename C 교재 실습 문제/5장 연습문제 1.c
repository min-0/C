#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	if (n < 0)
	{
		printf("���� �µ��� ���� %d�� �Դϴ�\n", n);
	}
	else
	{
		printf("���� �µ��� %d�� �Դϴ�\n", n);
	}
	return 0;
}