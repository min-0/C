#include <stdio.h>

int main()
{
	int r;
	double lenght;

	printf("�ѷ��� ���� ���� ��������? ");
	scanf_s("%d", &r);

	lenght = 2 * 3.14 * r;

	printf("�������� %d�� ���� �ѷ��� %.2lf�̴�. \n", r, lenght);
}