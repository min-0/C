#include <stdio.h>

int main()
{
	int n;
	int i = 0;

	printf("����� 3�� ����� ������: ");
	scanf("%d", &n);

	while (i < n)
	{
		i++;
		printf("%d ", 3 * i);
	}
}