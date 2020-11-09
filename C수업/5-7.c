#include <stdio.h>

int main()
{
	double h;
	double w;
	double n;

	printf("키 : ");
	scanf("%lf", &h);

	printf("체중 : ");
	scanf("%lf", &w);

	n = (h - 100)*0.9;

	if (n - 5<= w && n + 5 >= w )
	{
		printf("당신은 표준 체중입니다");
	}
	else if (w > n + 5)
	{
		printf("당신은 과체중입니다");
	}
	else if (w < n - 5)
	{
		printf("당신은 저체중입니다");
	}
}