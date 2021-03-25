#include <stdio.h>

int main()
{
	int n, i;

	printf("양의 정수 n: ");
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
			printf("%d는 소수입니다\n", n);
		}
		else
		{
			printf("%d는 소수가 아닙니다\n", n);
		}
	}
	
}