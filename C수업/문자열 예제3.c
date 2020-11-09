#include <stdio.h>
#include <string.h>

int main()
{
	char data[50];
	char delete;
	int i;

	printf("문자열을 입력하세요 : ");
	gets(data);

	printf("삭제할 문자를 입력하세요 : ");
	scanf("%c", &delete);

	//삭제할 문자의 인덱스 찾기
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

	//NULL 아닐 때 옮기기
	while (data[i + 1] != NULL)
	{
		data[i] = data[i + 1];
		i++;
	}
	data[i] = NULL; //마지막 i자리에 null 표시
	printf("%s", data);
}