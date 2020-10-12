#include <stdio.h>

int main()
{
	int n;
		scanf_s("%d", &n);

		for (int i = 1; i <= n; i++)
		{
			for (int k = n; k > i; k--)
			{
				printf(" ");
			}

			for (int j = 1; j <= (i * 2) - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (int i = 1; i < n; i++)
		{
			for (int k = 1; k <= i; k++)
			{
				printf(" ");
			}

			for (int j = 2 * n - 1; j > i * 2; j--)
			{
				printf("*");
			}
			printf("\n");
		}
}
/*
맨 마지막 for문 왜 저런지 생각을 해보았슴니다
왜 그런지 알았어요
j를 2n-1개에서 2i 미만까지 돌리면서 빼라 맞죠 크으으,,,,,,
*/