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
�˻� �� �� �ؾ��� ~ for�� �ϳ��� �� �� �˾Ҵµ� �ƴϴ��󱸿�
ù ��° for�� ����, �� ��° for�� �� �ϳ��� �����ϴ� �� �ô´ٰ� �ϳ׿�
\n �� �ʼ�~!
*/