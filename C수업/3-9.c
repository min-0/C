#include <stdio.h>

int main()
{
	double radius, phi = 3.141592;
	double circum, area, volume;

	printf("������(cm)�� �Է��ϼ���. ");
	scanf_s("%lf", &radius);

	circum = 2 * phi * radius;
	area = phi * radius * radius;
	volume = (4.0 / 3.0) * area * radius;

	printf("\n�ѷ� = %8.2lfcm \n", circum);
	printf("���� = %8.2lfcm��\n", area);
	printf("���� = %8.2lfcm��\n", volume);

}