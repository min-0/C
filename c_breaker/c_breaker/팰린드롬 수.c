#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int count = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &i);

	int temp = i;

	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	printf("%d�ڸ��� \n", count);
	
	int start = 1;
	while (temp > 0)
	{
		count--;
		printf("%d��° �ݺ�\n", start++);
		//printf("pow��: %d\n", (int)pow(10, count));
		//printf("�߰���: %d\n", temp / (int)pow(10, count));
		printf("�����: %d\n\n", temp / (int)pow(10, count)%10);
	}
}