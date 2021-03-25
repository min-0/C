#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	if (n < 0)
	{
		if (n % 2 == 0)
		{
			printf("입력한 수는 음의 짝수입니다.\n", n);
		}
		else
		{
			printf("입력한 수는 음의 홀수입니다\n", n);
		}
	}
	if (n > 0)
	{
		if (n % 2 == 0)
		{
			printf("입력한 수는 양의 짝수입니다.\n", n);
		}
		else
		{
			printf("입력한 수는 음의 홀수입니다\n", n);
		}
	}
	
	return 0;
}