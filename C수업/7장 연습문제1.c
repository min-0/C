#include <stdio.h>

int main()
{
	int n[5] = { 3, 7, 1, 9, 10 };
	int i = 0;
	int cnt = 0;
	int tcnt = 0;
	int sum = 0;
	int temp;
	int repeat;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", n[i]);

		if (n[i] % 2 == 0)
		{
			cnt++;
			sum += n[i];
		}
		if (n[i] % 3 == 0)
		{
			tcnt++;
		}
	}
	for (repeat = 1; repeat < 5; repeat++)
	{
		for (i = 0; i < 4; i++)
		{
			if (n[i] < n[i + 1])
			{
				temp = n[i];
				n[i] = n[i + 1];
				n[i + 1] = temp;
			}
		}
	}
	printf("\n¦���� %d��, ¦�� ������ ���� %d, 3�� ��� ������ %d��, ���� ū �� %d, �ι�°�� ū �� %d\n", cnt, sum, tcnt, n[0], n[1]);
}