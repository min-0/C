#include <stdio.h>

int main()
{
	int n[10] = { 0 };
	int i = 0;
	int cnt = 0;
	int sum = 0;
	int tcnt = 0;
	int repeat;
	int temp;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		sum += n[i];

		if (n[i] % 2 != 0)
		{
			cnt++;
		}

		if (n[i] > 10)
		{
			tcnt++;
		}
	}
	printf("홀수는 %d개, 자료의 합은 %d, 10보다 큰 수의 개수는 %d개\n", cnt, sum, tcnt);
	for (repeat = 1; repeat < 10; repeat++)
	{
		for (i = 0; i < 9; i++)
		{
			if (n[i] > n[i + 1])
			{
				temp = n[i];
				n[i] = n[i + 1];
				n[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", n[i]);
	}
}