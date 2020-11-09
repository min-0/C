#include <stdio.h>
int main()
{
	char name[7];
	char call[16];
	char city[6];

	gets(name);
	gets(call);
	gets(city);

	printf("내 이름은 %s이고, ", name);
	printf("전화번호는 %s, ", call);
	printf("사는 곳은 %s시 입니다.\n", city);

}