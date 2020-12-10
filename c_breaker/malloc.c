#include <stdio.h>
#include <malloc.h>

int main()
{
	int a;
	int *b;

	scanf("%d", &a);

	b = (int*)malloc(sizeof(int) * 100);
	//(받을 배열 변수형/형 변환)malloc(sizeof(원하는 크기 변수형)*인수 크기);

	printf("%d\n", sizeof(b));

	printf("%d", _msize(b)/sizeof(b));

	/*
	int **b;
	
	b = (int **)malloc(sizeof(int*)*100) 
	*/
}