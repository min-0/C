#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (int k = 2 * n; k > i * 2; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
    }

    for (int i = 1; i < n ; i++)
    {
        printf("\n");

        for (int j = n; j > i; j--)
        {
            printf("*");
        }

        for (int k = 1; k <= i * 2; k++)
        {
            printf(" ");
        }

        for (int j = n; j > i; j--)
        {
            printf("*");
        }
    }
	
}