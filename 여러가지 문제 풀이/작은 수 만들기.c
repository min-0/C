#include <stdio.h>

int main()
{
	int digit[5];
	int input;

	scanf("%d", &input);

	for (int i = 0; i < 5; i++){
		digit[i] = input % 10;
		input /= 10;
	}

	for (int repeat = 1; repeat < 5; repeat++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (digit[i] > digit[i + 1])
			{
				int temp = digit[i];
				digit[i] = digit[i + 1];
				digit[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d", digit[i]);
	}
	

	
}