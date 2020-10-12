#include <stdio.h>

int main()
{
	for (int i = 1; i < 6; i++)
	{
		printf("\n");

		for (int s = 1; s <= i; s++)
		{
			printf("*");
		}
	}
}

/*
검색 한 번 해쒀요 ~ for문 하나면 될 줄 알았는데 아니더라구요
첫 번째 for이 세로, 두 번째 for이 별 하나씩 증가하는 걸 맡는다고 하네여
\n 은 필수~!
*/