#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	printf("4�ڸ� ������ ���� �Է��ϼ���. : ");
	scanf_s("%d", &num);

	if (num < 10000)
	{
		while (num)
		{
			sum += num % 10; //sum = sum + num % 10
			num /= 10; // num = num / 10
		}

		printf("\n �� �ڸ����� ���� %d �Դϴ� \n", sum);
	}
	else
	{
		printf("\n 4�ڸ� ������ ���� �Է��ϼ���! \n");
	}
}