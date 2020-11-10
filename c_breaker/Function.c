#include <stdio.h>
int GuGu(int a)
{
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}

	return 1;
}

int main()
{
	int input;

	scanf("%d", &input);

	GuGu(input);

	return 0;
}