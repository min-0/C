#include <stdio.h>

int main()
{
	int n;
	int i = 2;

	printf("�ִ� ������� �Ҽ��� ���? ");
	scanf("%d", &n);

	while (i < n)
	{
		if (n % i != 0)
		{
			if (n == i)
			printf("%d ", i);
		}
		i++;
	}
}