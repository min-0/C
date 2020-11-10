#include <stdio.h>

int main()
{
	int n[5] = {3, 0, -30, -20, -1};
	int i;
	int min;

	min = n[0];

	for (i = 0; i < 5; i++)
	{
		if (n[i] < min)
		{
			min = n[i];
		}
	}
	printf("어는 점 목록: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n가장 낮은 어는 점: %d\n", min);
}