#include <stdio.h>

int main()
{
	double n;
	char u;

	printf("�Է� ������ cm�̸� 'c'�� 'C'��, inch�̸� 'i'�� 'I'�� �Է��ϼ���.\n");

	printf("�Է´���: ");
	scanf_s("%c", &u);
	printf("�Է°�: ");
	scanf_s("%lf", &n);

	if (u == 'c' || u == 'C')
	{
		printf("�Է��� %.2lfcm�� %.2lfinch �Դϴ�.\n", n, n / 2.54);
	}
	else if (u == 'i' || u == 'I')
	{
		printf("�Է��� %.2lfinch�� %.2lfcm �Դϴ�.\n", n, n * 2.54);
	}
	return 0;
}