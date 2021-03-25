#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			if (row == col || row + col == n + 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
		}
	}
}