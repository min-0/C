#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *name[5] = {0};

	for (int i = 0; i < 5; i++)
	{
		name[i] = (char *)malloc(sizeof(char)* 100);
		scanf_s("%s", name[i],100);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("\nname[%d] = %s\n", i, name[i]);
	}
}