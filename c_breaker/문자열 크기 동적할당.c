#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* get_Dstr(int size)
{
	char *s;
	int index = 0;

	//1. size��ũ�� char �迭�� ���� �Ҵ�
	s = (char*)malloc(sizeof(char)*(size + 1));

	//2. getch�� �Է��� �޾Ƽ� s �迭�� �ϳ��� �߰�
	for (char c = getch(); c != '\r'; c = getch())
	{
		printf("%c", c);
		//3. ���� �Է°��� �Ҵ�� ������ �ʰ��� ���, ���� +a ������ �Ҵ��� ��, �������� �����ϰ� �߰��� ���� ���� �� ���������� ���ƿ�

		if (index < size)
		{
			s[index++] = c;
		}
		else //�ʰ��ϴ� ���
		{
			//3.1. ���ο� ���� �Ҵ� (+a) 
			char* cs = (char*)malloc(sizeof(char)*(size + 1));

			for (int i = 0; i <= size; i++)
			{
				cs[i] = s[i]; //3.2. ���� �Էµ� ���ڵ��� ���� �Ҵ�� ������ ����
			}

			s = (char*)malloc(sizeof(char)*(++size + 1)); // ���� �ø���
			for (int i = 0; i < size - 1; i++)
			{
				s[i] = cs[i];
			}
			s[index++] = c;

			//���� ���� ���� ���� ����
			free(cs);
		}
	}
	s[index] = NULL;
	printf("\n");

	char *cs = (char*)malloc(sizeof(char)*++index);

	for (int i = 0; i < index; i++)//strlen(s) == index ����
	{
		cs[i] = s[i];
	}
	s = (char*)malloc(sizeof(char) * index);
	for (int i = 0; i < index; i++)
	{
		s[i] = cs[i];
	}
	return s;
}

int main()
{
	char *dstr = get_Dstr(3);

	printf("�Էµ� ���ڿ��� ���̴� %d�̸�, ���ڿ��� %s�Դϴ�.\n", strlen(dstr), dstr);

	return 0;
}