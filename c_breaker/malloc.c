#include <stdio.h>
#include <malloc.h>

int main()
{
	int a;
	int *b;

	scanf("%d", &a);

	b = (int*)malloc(sizeof(int) * 100);
	//(���� �迭 ������/�� ��ȯ)malloc(sizeof(���ϴ� ũ�� ������)*�μ� ũ��);

	printf("%d\n", sizeof(b));

	printf("%d", _msize(b)/sizeof(b));

	/*
	int **b;
	
	b = (int **)malloc(sizeof(int*)*100) 
	*/
}