#include <stdio.h>

void delete_a_char(char *str, char c)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
		{
			for (int k = i; k < strlen(str); k++)
			{
				str[k] = str[k + 1];
			}
			break;
		}
	}
	//���ӵ� ���ڸ� ������� 3�� for�� ������ ��,,!
}

void delete_chars(char *str, char c)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
		{
			for (int k = i; k < strlen(str); k++)
			{
				str[k] = str[k + 1];
			}
		}
	}
}

int main()
{
	char str[80];
	gets(str);

	delete_a_char(str, 'o');
	puts(str);

	delete_chars(str, 'g');
	puts(str);
}