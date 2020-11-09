#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		for (int j = 2 * n; j > 2 * i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n; i++)
	{
		for (int k = n; k > i; k--)
		{
			printf("*");
		}
		for (int j = 1; j < 2 * i + 1; j++)
		{
			printf(" ");
		}
		for (int k = n; k > i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}