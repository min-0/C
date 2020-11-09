#include <stdio.h>

int main()
{
	/* gets 특징
	gets는 enter키까지 출력, 공백 가능
	1차원 문자열 배열만 받는다 = char* 만 받을 수 있다.
	*/
	char arr[10];

	gets(&arr);//주으

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == ' ')
		{
			printf("%c", '_');
		}
		else
		{
			printf("%c", arr[i]);
		}
	}

	puts(arr);//알아서 행바꿈 해줌 \n 필요없음, char*이 들어가야 함
	printf("%s", arr);
}