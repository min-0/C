#include <stdio.h>

int main()
{
	/* gets Ư¡
	gets�� enterŰ���� ���, ���� ����
	1���� ���ڿ� �迭�� �޴´� = char* �� ���� �� �ִ�.
	*/
	char arr[10];

	gets(&arr);//����

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == ' ')
		{
			printf("%c", '_');
		}
		else
		{
			printf("%c", arr[i]);
		}
	}

	puts(arr);//�˾Ƽ� ��ٲ� ���� \n �ʿ����, char*�� ���� ��
	printf("%s", arr);
}