#include <stdio.h>
#include <string.h>

int main()
{
	char data1[10];
	char data2[10];
	char data3[10];

	gets(data1);
	gets(data2);

	int len1 = strlen(data1);
	for (int i = 0; i < len1; i++){
		data3[i] = data1[i];
	}

	int len2 = strlen(data2);
	for (int i = 0; i <= len2; i++){
		data3[i + len1] = data2[i];
	}

	/*strcpy(data3, data1);
	strcat(data3, data2);*/

	printf("%s", data3);
}