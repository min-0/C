#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = n; k > i; k--)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++)
	{
		for (int k = n; k > i; k--)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}
		for (int k = 2 * n - 1; k > i * 2; k--)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = 2 * n; k > i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}