#include <stdio.h>
#include <malloc.h>

int main()
{ //p[A][B]�� ����� ���� ����

	char **p;

	int A;

	p = (char**)malloc(sizeof(char*)*A);

	int B;

	for (int i = 0; i < A; i++)
	{
		p[i] = (char*)malloc(sizeof(char)*B);
	}
}