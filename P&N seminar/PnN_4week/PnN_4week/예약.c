#include <stdio.h>

int main()
{
	char oper;
	int i;

	printf("�¼��� ���� �Ͻðڽ��ϱ�?(y or n) ");
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

			printf("\n\n���° �¼��� �����Ͻðڽ��ϱ�? ");
			scanf_s("%d", &i);
	}
}