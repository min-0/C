#include <stdio.h>

int main()
{
	/* 
	int a = 4;
	int b = 12;
	int c = 5;;
	double result1;
	double result2;

	result1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	result2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	printf("f(x) = 4x^2 + 12x + 5  \n\n x1 = %.1lf \n x2 = %.1lf \n", result1, result2);
	*/

	int a, b, c;
	double x1, x2;

	scanf_s("%d%d%d", &a, &b, &c);
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

	printf("x1 = %.1lf, x2 = %.1lf \n", x1, x2);
}