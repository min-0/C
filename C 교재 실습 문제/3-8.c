#include <stdio.h>

int main()
{
	int o;
	int x;
	int sum;

	printf("8���� 16������ ������� �Է��ϼ���. : ");
	scanf_s("%o", &o);
	scanf_s("%x", &x);

	sum = o + x;

	printf("\n %o(8) + %x(16) = %d \n", o, x, sum);
}