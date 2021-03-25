#include <stdio.h>

int main()
{
	char a;

	printf("문자 입력 : ");
	scanf("%c", &a);

	if (a >= '1' && a <= '9')
	{
		printf("숫자입니다\n");
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("알파벳 대문자입니다\n");
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("알파벳 소문자입니다\n");
	}
}