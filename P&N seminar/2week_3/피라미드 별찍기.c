#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		printf("\n");

		for (int k = 1; k >= i; k--)
		{
			printf("-");
		}

		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		/* ��������� �߰� _*
						   __**
						   ***
		*/

		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		for (int k = 1; k >= i; k--)
		{
			printf("-");
		}
	}

	/* ��������� �߰� �ڿ� _
						    *__
						    **
	*/
}

/*
�̰� ,, �³��� ,,,,,,,,,,,,,,html ���� ��� �������鼭 ���ƾ��,,,,,,,,,
*/