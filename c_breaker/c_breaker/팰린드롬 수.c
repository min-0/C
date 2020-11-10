#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int count = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &i);

	int temp = i;

	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	printf("%d자릿수 \n", count);
	
	int start = 1;
	while (temp > 0)
	{
		count--;
		printf("%d번째 반복\n", start++);
		//printf("pow값: %d\n", (int)pow(10, count));
		//printf("중간값: %d\n", temp / (int)pow(10, count));
		printf("결과값: %d\n\n", temp / (int)pow(10, count)%10);
	}
}