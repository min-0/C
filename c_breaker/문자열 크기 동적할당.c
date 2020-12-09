#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* get_Dstr(int size)
{
	char *s;
	int index = 0;

	//1. size만크의 char 배열을 동적 할당
	s = (char*)malloc(sizeof(char)*(size + 1));

	//2. getch로 입력을 받아서 s 배열에 하나씩 추가
	for (char c = getch(); c != '\r'; c = getch())
	{
		printf("%c", c);
		//3. 만약 입력값이 할당된 공간을 초과한 경우, 새로 +a 공간을 할당한 후, 기존값을 복사하고 추가된 값을 넣은 후 원래값으로 돌아옴

		if (index < size)
		{
			s[index++] = c;
		}
		else //초과하는 경우
		{
			//3.1. 새로운 공간 할당 (+a) 
			char* cs = (char*)malloc(sizeof(char)*(size + 1));

			for (int i = 0; i <= size; i++)
			{
				cs[i] = s[i]; //3.2. 기존 입력된 문자들을 새로 할당된 공간에 복사
			}

			s = (char*)malloc(sizeof(char)*(++size + 1)); // 공간 늘리기
			for (int i = 0; i < size - 1; i++)
			{
				s[i] = cs[i];
			}
			s[index++] = c;

			//원래 쓰던 공간 연결 끊기
			free(cs);
		}
	}
	s[index] = NULL;
	printf("\n");

	char *cs = (char*)malloc(sizeof(char)*++index);

	for (int i = 0; i < index; i++)//strlen(s) == index 같음
	{
		cs[i] = s[i];
	}
	s = (char*)malloc(sizeof(char) * index);
	for (int i = 0; i < index; i++)
	{
		s[i] = cs[i];
	}
	return s;
}

int main()
{
	char *dstr = get_Dstr(3);

	printf("입력된 문자열의 길이는 %d이며, 문자열은 %s입니다.\n", strlen(dstr), dstr);

	return 0;
}