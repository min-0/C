#include <stdio.h>

int main()
{
	char a;

	printf("���� �Է� : ");
	scanf("%c", &a);

	if (a >= '1' && a <= '9')
	{
		printf("�����Դϴ�\n");
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("���ĺ� �빮���Դϴ�\n");
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("���ĺ� �ҹ����Դϴ�\n");
	}
}