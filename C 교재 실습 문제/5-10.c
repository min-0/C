#include <stdio.h>

int main()
{
	int n, h;

	printf("�� �Է�: ");
	scanf_s("%d", &n);

	printf("����(1, 2, 3): ");
	scanf("%d", &h);

	switch (h)
	{
	case 1: printf("�Է��� ���� %d�� %d����� %d�Դϴ�\n", n, h, n * h);
		break;
	case 2: printf("�Է��� ���� %d�� %d����� %d�Դϴ�\n", n, h, n * h);
		break;
	case 3: printf("�Է��� ���� %d�� %d����� %d�Դϴ�\n", n, h, n * h);
		break;
	default: printf("���� �ٽ� �Է����ּ���.\n");
	}

	return 0;
}