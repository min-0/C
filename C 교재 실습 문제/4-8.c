#include <stdio.h>

int main()
{
	int m;

	printf("월(1~12)입력 : ");
	scanf_s("%d", &m);

	if (m >= 1 && m <= 6)
	{
		printf(">> %d월은 상반기 입니다.", m);
	}
	else if (m >= 7 && m <= 12)
	{
		printf(">> %d월은 하반기 입니다.", m);
	}
	else if (m >= 13)
	{
		printf("1~12 사이의 수를 입력해주세요 \n");
	}
	
}