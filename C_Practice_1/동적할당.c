#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *num = (int)malloc(sizeof(int)*10);

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", num[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", num[i]);
	}
}