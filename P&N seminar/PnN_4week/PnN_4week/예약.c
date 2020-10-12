#include <stdio.h>

int main()
{
	char oper;
	int i;

	printf("좌석을 예약 하시겠습니까?(y or n) ");
	scanf_s("%c", &oper);

	while(oper == 'y')
	{
		printf("\n----------------------------------\n\n");
		for (int s = 1; s <= 10; s++)
		{
			printf("  %d", s);
		}
		printf("\n\n----------------------------------\n\n");
		for (int c = 1; c <= 10; c++)
		{
			printf("  0");
		}

			printf("\n\n몇번째 좌석을 예약하시겠습니까? ");
			scanf_s("%d", &i);
	}
}