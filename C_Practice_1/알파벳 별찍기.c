#include <stdio.h>

int main()
{
	for (int i = 65; i < 90; i++)
	{
		for (int k = 65; k <= i; k++)
		{
			printf("%c", k);
		}
		printf("\n");
	}

	for (int i = 97; i < 122; i++)
	{
		for (int k = 97; k <= i; k++)
		{
			printf("%c", k);
		}
		printf("\n");
	}

	for (int i = 0; i < 26; i++)
	{
		for (int k = 40 - i; k > 0; k--)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("%2c", 65 + j);
		}
		printf("\n");
	}
}