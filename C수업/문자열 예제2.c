#include <stdio.h>
#include <string.h>

int main()
{
	char data[80];

	printf("문자열을 입력하세요 : ");
	gets(data);

	printf("입력된 문자열에 포함된 문자는 %d개 입니다.\n", strlen(data));

}