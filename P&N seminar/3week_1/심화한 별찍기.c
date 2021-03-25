#include <stdio.h>

int main()
{
	int n;
		scanf_s("%d", &n);

		for (int i = 1; i <= n; i++)
		{
			for (int k = n; k > i; k--)
			{
				printf(" ");
			}

			for (int j = 1; j <= (i * 2) - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (int i = 1; i < n; i++)
		{
			for (int k = 1; k <= i; k++)
			{
				printf(" ");
			}

			for (int j = 2 * n - 1; j > i * 2; j--)
			{
				printf("*");
			}
			printf("\n");
		}
}