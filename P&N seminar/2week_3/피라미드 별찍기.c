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

		/* 여기까지가 중간 _*
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

	/* 여기까지가 중가 뒤에 _
						    *__
						    **
	*/
}

/*
이거 ,, 맞나요 ,,,,,,,,,,,,,,html 마냥 계속 돌려가면서 고쳤어요,,,,,,,,,
*/