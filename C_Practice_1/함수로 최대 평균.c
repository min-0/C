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
	printf("최대값 = %d\n", temp);
}
void fun2(int *A)
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += A[i];
	}
	printf("평균 = %d\n", sum/5);
}
int main()
{
	int A[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
	}
	fun1(A); //주소 연결
	fun2(A);

}