#include <stdio.h>
#include <string.h>
#include <malloc.h>

void init(char **flowers, int size)
{
	char newflowers[100];

	for (int i = 0; i < size; i++)
	{
		scanf("%s", newflowers);
		flowers[i] = (char*)malloc(sizeof(char)*strlen(newflowers));
		strcpy(flowers[i], newflowers);
	}
}

void prn(char **flowers, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s ", flowers[i]);
	}
}

int main()
{
	char *flowers[5] = { "lily", "cosmos", "sunflower", "rose", "lavender" };

	init(flowers, 5);
	prn(flowers, 5);
}