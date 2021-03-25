#include <stdio.h>

int main()
{
	int o;
	int x;
	int sum;

	printf("8진수 16진수를 순서대로 입력하세요. : ");
	scanf_s("%o", &o);
	scanf_s("%x", &x);

	sum = o + x;

	printf("\n %o(8) + %x(16) = %d \n", o, x, sum);
}