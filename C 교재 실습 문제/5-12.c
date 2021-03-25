#include <stdio.h>

int main()
{
	int n;
	int i = 0;

	printf("출력할 3의 배수의 개수는: ");
	scanf("%d", &n);

	while (i < n)
	{
		i++;
		printf("%d ", 3 * i);
	}
}