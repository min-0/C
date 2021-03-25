#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int k = n - 1; k > i; k--)
		{
			printf(" ");
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			printf(" ");
		}
		for (int j = 2 * n - 3; j > 2 * i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}