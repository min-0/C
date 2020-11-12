#include <stdio.h>

int main()
{
	int sum = 0;
	int *sump;

	sump = &sum;

	printf("sum = %d \n", *sump);
}