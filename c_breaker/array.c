#include <stdio.h>

int main()
{
	/*문자열의 특징 
	1. 한글은 2개, 나머지는 1개 byte
	2. 끝은 \0(=null)으로 인식*/

	char A[10] = {'a', 'b', '\0', NULL, 'c', 'd'};

	printf("%s\n\n", A);//%s로 하면 A 다 나오고 %c 넣으면 for문 돌려야 함 ㅋㅋ

	char B[10];

	scanf("%s", &B);//&없어도 입력가능, 띄어쓰기 있는 문자열을 받을 수 없다

	for (int i = 0; i < 10; i++)
	{
		printf("%c ", B[i]);
	}
}