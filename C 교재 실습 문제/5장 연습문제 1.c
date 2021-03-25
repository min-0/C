#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	if (n < 0)
	{
		printf("오늘 온도는 영하 %d도 입니다\n", n);
	}
	else
	{
		printf("오늘 온도는 %d도 입니다\n", n);
	}
	return 0;
}