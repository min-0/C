#include <stdio.h>

int main()
{
	int matrix[2][3] = { { 1, 2, 3 }, { 10, 20, 30 } };

	printf("%d\n", *matrix);
	printf("%d\n", *matrix[0]);
	printf("%d\n", *matrix[1]);
	printf("%d\n", *(matrix[1]+1));
}