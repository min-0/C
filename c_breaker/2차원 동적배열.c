#include <stdio.h>
#include <malloc.h>

int main()
{ //p[A][B]를 만들기 위한 과정

	char **p;

	int A;

	p = (char**)malloc(sizeof(char*)*A);

	int B;

	for (int i = 0; i < A; i++)
	{
		p[i] = (char*)malloc(sizeof(char)*B);
	}
}