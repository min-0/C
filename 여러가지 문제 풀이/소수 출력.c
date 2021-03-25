#include <stdio.h>

int main()
{
	int input = 0;

	printf("입력: ");
	scanf("%d", &input);
	printf("결과: ");

	int isPrimary;

	for (int i = 2; i < input; i++)
	{
		isPrimary = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrimary = 0;
				break;
			}
		}
		if (isPrimary)
		{
			printf("%d ", i);
		}
	}
}