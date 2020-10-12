#include <stdio.h>
int main() {
	int n, m, z;
	char oper;

	scanf_s("%d", &n);
	scanf_s("%c", &oper);
	scanf_s("%d", &m);

	switch (oper)
	{
	case '+':
		z = n + m;
		break;
	case '-':
		z = n - m;
		break;
	case '*':
		z = n * m;
		break;
	case '/':
		z = n / m;
		break;
	default:
		break;
	}

	printf("%d", z);
}