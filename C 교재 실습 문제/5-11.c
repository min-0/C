#include <stdio.h>

int main()
{
	int n, i;

	printf("���� ���� n: ");
	scanf("%d", &n);

	if (n > 1)
	{
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}
		if (n == i)
		{
			printf("%d�� �Ҽ��Դϴ�\n", n);
		}
		else
		{
			printf("%d�� �Ҽ��� �ƴմϴ�\n", n);
		}
	}
	
}