#include <stdio.h>

int main()
{
	double radius, phi = 3.141592;
	double circum, area, volume;

	printf("반지름(cm)을 입력하세요. ");
	scanf_s("%lf", &radius);

	circum = 2 * phi * radius;
	area = phi * radius * radius;
	volume = (4.0 / 3.0) * area * radius;

	printf("\n둘레 = %8.2lfcm \n", circum);
	printf("면적 = %8.2lfcm²\n", area);
	printf("부피 = %8.2lfcm³\n", volume);

}