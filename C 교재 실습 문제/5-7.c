#include <stdio.h>

int main()
{
	double h;
	double w;
	double n;

	printf("Ű : ");
	scanf("%lf", &h);

	printf("ü�� : ");
	scanf("%lf", &w);

	n = (h - 100)*0.9;

	if (n - 5<= w && n + 5 >= w )
	{
		printf("����� ǥ�� ü���Դϴ�");
	}
	else if (w > n + 5)
	{
		printf("����� ��ü���Դϴ�");
	}
	else if (w < n - 5)
	{
		printf("����� ��ü���Դϴ�");
	}
}