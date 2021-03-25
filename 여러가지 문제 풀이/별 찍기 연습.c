#include <stdio.h>

int main()
{
	int input;
	int digit[5];
	int counter[10] = { 0 };
	int i;
	scanf("%d", &input);

	for (i = 4; i >= 0; i--)
	{
		digit[i] = input % 10;
		for (int t = 0; t < 10; t++)
		{
			if (digit[i] == t)
			{
				counter[t]++;
			}
		}
		input /= 10;
	}




	for (int t = 0; t < 10; t++)
	{
		if (counter[t] > 0){

			for (int iter = 0; iter < counter[t]; iter++){

				printf("%d", t);
			}

		}
	}
	

	/*
	int temp = j
	j = i
	i = temp
	*/
}