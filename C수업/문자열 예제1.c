#include <stdio.h>
int main()
{
	char name[7];
	char call[16];
	char city[6];

	gets(name);
	gets(call);
	gets(city);

	printf("�� �̸��� %s�̰�, ", name);
	printf("��ȭ��ȣ�� %s, ", call);
	printf("��� ���� %s�� �Դϴ�.\n", city);

}