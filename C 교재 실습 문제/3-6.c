#include <stdio.h>

int main()
{
	double f;
	double c;

	printf("ȭ���µ�(F)�� �Է��ϼ���. : ");
	scanf_s("%lf", &f);

	c = (5.0 / 9.0) * (f - 32.0);

	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�. \n", f, c);
}