#include <stdio.h>

void delete_a_char(char *s, char c)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			for (int j = i; j < strlen(s); j++)
			{
				s[j] = s[j + 1];
			}
			break;
		}
	}
}
void delete_chars(char *s, char c)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			for (int j = i; j < strlen(s); j++)
			{
				s[j] = s[j + 1];
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

	return 0;
}