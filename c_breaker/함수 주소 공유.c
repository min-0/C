#include <stdio.h>
void AddBtoA(int* A, int* B)
{
	*A = *A + *B; //주소 연결

	//A = A + B;

	printf("%d\n", *A);
}
int main()
{
	int A, B;

	A = 5; //관심 없음
	B = 10; //value 관심 없고 오직 add

	AddBtoA(&A, &B); //주소 연결

	printf("%d\n", A);
} //함수 공ㅇ융