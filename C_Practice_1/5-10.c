#include <stdio.h>

int main()
{
	int n;
	int m;

	printf("�� �Է�: ");
	scanf("%d", &n);
	printf("����(1, 2, 3): ");
	scanf("%d", &m);

	switch (m)
	{
	case 1: printf("�Է��� ���� %d�� %d����� %d�Դϴ�", n, m, n * m);
		break;
	case 2: printf("�Է��� ���� %d�� %d����� %d�Դϴ�", n, m, n * m);
		break;
	case 3: printf("�Է��� ���� %d�� %d����� %d�Դϴ�", n, m, n * m);
		break;
	default: printf("�߸��� ������ �Դϴ�");
	}
}