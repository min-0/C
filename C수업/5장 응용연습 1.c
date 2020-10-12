#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	if (n > 100)
	{
		n % 2 == 0 ? printf("입력한 수는 100보다 크고 양수이며 짝수입니다\n") : printf("입력한 수는 100보다 크고 양수이며 홀수입니다\n");
	}
	else if (n < 0)
	{
		n % 2 == 0 ? printf("입력한 수는 음수이며, 짝수입니다\n") : printf("입력한 수는 음수이며, 홀수입니다\n");
	}
	else
	{
		n > 0 && n % 2 == 0 ? printf("입력한 수는 양수이며, 짝수입니다\n") : printf("입력한 수는 양수이며, 홀수입니다\n");
	}
	return 0;
}