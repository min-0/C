#include <stdio.h>

int main()
{
	int a, b;
	int sum = 0;
	int cnt = 0;

	scanf("%d%d", &a, &b);

	while (sum < 100 && a < b)
	{
		if (a % 3 == 0)
		{
			sum += a;
			if (cnt == 0)
			{
				printf("%d", a);
			}
			else
			{
				printf(" + %d", a);
			}
			cnt++;
		}
		a++;
	}
	printf(" = %d, %d\n", sum, cnt);
}