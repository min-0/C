#include <stdio.h>
void AddBtoA(int* A, int* B)
{
	*A = *A + *B; //�ּ� ����

	//A = A + B;

	printf("%d\n", *A);
}
int main()
{
	int A, B;

	A = 5; //���� ����
	B = 10; //value ���� ���� ���� add

	AddBtoA(&A, &B); //�ּ� ����

	printf("%d\n", A);
} //�Լ� ������