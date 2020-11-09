#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int k = n ; k > i; k--)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 1; j <= 2 * (i-1)-1; j++)
		{
			printf(" ");
		}
		if (i!=1)
			printf("*");
		printf("\n");
	}
}