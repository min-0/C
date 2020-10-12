#include <stdio.h>

int main()
{
	int g;
	int m = 1024;
	int k = m * 1024;

	printf("ют╥б(Gigabyte): ");
	scanf_s("%d", &g);

	printf(">> %d Gigabyte = %d Megabyte = %d Killobyte", g, g * m, k * g);

}