#include <stdio.h>

int main()
{
	int survey[30] = { 1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2, 1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3 };

	int vote[6] = { 0 };
	int i;

	for (i = 0; i < 30; i++)
	{
		vote[survey[i]]++;
	}
	printf("������ ��ǥ��\n");
	printf("=============\n");
	for (i = 1; i <= 5; i++)
	{
		printf("%d��   %dǥ\n", i, vote[i]);
	}
}