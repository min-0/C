#include <stdio.h>

int main()
{
	int *ptr, a[5] = { 10, 20, 30, 40, 50 };

	ptr = a;

	printf("���� ���� : %d, ���� ����: %d \n", *(ptr + 3), a[3]);
}