#include <stdio.h>

int main()
{
	int n;
	int i = 2;

	printf("최대 몇까지의 소수를 출력? ");
	scanf("%d", &n);

	while (i < n)
	{
		if (n % i != 0)
		{
			if (n == i)
			printf("%d ", i);
		}
		i++;
	}
}