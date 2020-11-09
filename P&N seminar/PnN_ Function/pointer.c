#include <stdio.h>

int main()
{
	int A;
	int B;
	int C;
	int D[5];

	printf("%d\n", &A);
	printf("%d\n", &B);
	printf("%d\n", &C);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", &D[i]);

	}
	printf("%d\n", &D);//원소 첫번째 주소 출력

	int* Ap;
	printf("%d\n\n", &Ap);
	//연결되었다 == 주소가 같다
	//메모리 주소는 변경 불가능
	
	A = 10;
	Ap = &A;
	*Ap = 15;
	printf("%d\n", A);

	A = 15;
	int** App = &Ap;
	**App = 15;
	printf("%d\n", A);

	A = 20;
	int*** Appp = &App;
	***Appp = 20;
	printf("%d", A);
}