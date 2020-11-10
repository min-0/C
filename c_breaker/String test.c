#include <stdio.h>
#include <string.h>

int main()
{
	char arr[5][100];

	for (int i = 0; i < 5; i++)
	{
		gets(&arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i]); //문자열 받는 거니까 c 아니고 s ㅋㅋ
	}
}