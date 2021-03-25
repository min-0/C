#include <stdio.h>

void fun1(int *A)
{
	int temp = A[0];

	for (int i = 0; i < 5; i++)
	{
		if (temp < A[i])
		{
			temp = A[i];
		}
	}
	printf("ÃÖ´ë°ª = %d\n", temp);
}
void fun2(int *A)
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += A[i];
	}
	printf("Æò±Õ = %d\n", sum / 5);
}
void fun3(int *A)
{
	int sort = 0;

	for (int s = 0; s < 5; s++)
	{
		for (int i = s+1; i < 5 ; i++)
		{
			if (A[s] > A[i])
			{
				sort = A[i];
				A[i] = A[s];
				A[s] = sort;
			}
		}
	}
}
int main()
{
	int A[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
	}
	fun1(A); 
	fun2(A);
	fun3(A);


	for (int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
}