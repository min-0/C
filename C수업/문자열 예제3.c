#include <stdio.h>
#include <string.h>

int main()
{
	char data[50];
	char delete;
	int i;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(data);

	printf("������ ���ڸ� �Է��ϼ��� : ");
	scanf("%c", &delete);

	//������ ������ �ε��� ã��
	i = 0;
	while (data[i] != 0)
	{
		if (data[i] == delete)
		{
			break;
		}
		i++;
	}
	printf("%d\n", i);

	//NULL �ƴ� �� �ű��
	while (data[i + 1] != NULL)
	{
		data[i] = data[i + 1];
		i++;
	}
	data[i] = NULL; //������ i�ڸ��� null ǥ��
	printf("%s", data);
}