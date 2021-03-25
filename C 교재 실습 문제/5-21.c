#include <stdio.h>

int main()
{
	/*int num_1, num_2;

	scanf_s("%d%d", &num_1, &num_2);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n", num_1, num_2);

	for (int mul = 1; mul <= 100; mul++)
	{
		if (mul % num_1 == 0 && mul % num_2 != 0)
			printf("%d ", mul);
	}*/

	/*int num_1, num_2;
	int mul = 0;
	scanf_s("%d%d", &num_1, &num_2);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n", num_1, num_2);

	while (mul <= 100)
	{
		if (mul % num_1 == 0 && mul % num_2 != 0)
			printf("%d ", mul);
		mul++;
	}*/

	int num_1, num_2, mul = 1;

	scanf_s("%d%d", &num_1, &num_2);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n", num_1, num_2);

	do{
		if (mul % num_1 == 0 && mul % num_2 != 0)
			printf("%d ", mul);
		mul++;
	} while (mul <= 100);


}