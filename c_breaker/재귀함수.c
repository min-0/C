#include <stdio.h>

int a(int b)
{
	if (b == 0)
	{
		return 1;
	}
	else
	{
		return a(--b);
	}
}
int main()
{
	printf("%d", a(5));
}