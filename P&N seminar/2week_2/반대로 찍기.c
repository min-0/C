#include <stdio.h>

int main()
{
	for (int i = 1; i < 6; i++)
	{
		printf("\n");

		for (int s = 5; s >= i; s--)
		{
			printf("*");
		}
	}
}