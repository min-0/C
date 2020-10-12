#include <stdio.h>

int main()
{
	int x = 15;
	int result;

	result = 0.5 * x * x + 2.5 * x + 5;
	printf("f(x) = 0.5 * %d * %d + 2.5 * %d + 5 = %d \n", x, x, x, result);
}