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
	printf("%d\n", &D);//���� ù��° �ּ� ���

	int* Ap;
	printf("%d\n\n", &Ap);
	//����Ǿ��� == �ּҰ� ����
	//�޸� �ּҴ� ���� �Ұ���
	
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