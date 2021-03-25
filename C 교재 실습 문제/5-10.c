#include <stdio.h>

int main()
{
	int n, h;

	printf("수 입력: ");
	scanf_s("%d", &n);

	printf("계산법(1, 2, 3): ");
	scanf("%d", &h);

	switch (h)
	{
	case 1: printf("입력한 수의 %d의 %d배수는 %d입니다\n", n, h, n * h);
		break;
	case 2: printf("입력한 수의 %d의 %d배수는 %d입니다\n", n, h, n * h);
		break;
	case 3: printf("입력한 수의 %d의 %d배수는 %d입니다\n", n, h, n * h);
		break;
	default: printf("수를 다시 입력해주세요.\n");
	}

	return 0;
}