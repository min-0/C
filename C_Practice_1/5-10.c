#include <stdio.h>

int main()
{
	int n;
	int m;

	printf("수 입력: ");
	scanf("%d", &n);
	printf("계산법(1, 2, 3): ");
	scanf("%d", &m);

	switch (m)
	{
	case 1: printf("입력한 수의 %d의 %d배수는 %d입니다", n, m, n * m);
		break;
	case 2: printf("입력한 수의 %d의 %d배수는 %d입니다", n, m, n * m);
		break;
	case 3: printf("입력한 수의 %d의 %d배수는 %d입니다", n, m, n * m);
		break;
	default: printf("잘못된 연산자 입니다");
	}
}