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
		printf("%s\n", arr[i]); //���ڿ� �޴� �Ŵϱ� c �ƴϰ� s ����
	}
}