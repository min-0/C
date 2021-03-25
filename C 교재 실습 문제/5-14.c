#include <stdio.h>

int main()
{
	double n;
	char u;

	printf("입력 단위가 cm이면 'c'나 'C'를, inch이면 'i'나 'I'를 입력하세요.\n");

	printf("입력단위: ");
	scanf_s("%c", &u);
	printf("입력값: ");
	scanf_s("%lf", &n);

	if (u == 'c' || u == 'C')
	{
		printf("입력한 %.2lfcm는 %.2lfinch 입니다.\n", n, n / 2.54);
	}
	else if (u == 'i' || u == 'I')
	{
		printf("입력한 %.2lfinch는 %.2lfcm 입니다.\n", n, n * 2.54);
	}
	return 0;
}