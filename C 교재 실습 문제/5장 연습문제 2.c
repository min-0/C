#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	if (n < 0)
	{
		if (n % 2 == 0)
		{
			printf("�Է��� ���� ���� ¦���Դϴ�.\n", n);
		}
		else
		{
			printf("�Է��� ���� ���� Ȧ���Դϴ�\n", n);
		}
	}
	if (n > 0)
	{
		if (n % 2 == 0)
		{
			printf("�Է��� ���� ���� ¦���Դϴ�.\n", n);
		}
		else
		{
			printf("�Է��� ���� ���� Ȧ���Դϴ�\n", n);
		}
	}
	
	return 0;
}