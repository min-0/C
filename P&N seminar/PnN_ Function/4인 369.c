#include <stdio.h>

int getClapCount(int number)
{
	// �ڼ��� ����
	int count = 0;
	// �� �ڸ��� üũ �˰���
	for (int i = number; i > 0; i /= 10)
	{
		// �� �ڸ���(i%10)�� 3�� ����ΰ�?
		if ((i % 10) % 3 == 0 && i % 10 != 0)
			count++;
	}
	return count;
}

void printClap(int count)
{
	// ī��Ʈ ������ŭ �ڼ����
	for (int i = 0; i < count; i++)
	{
		printf("¦! ");
	}
	// ������ �ٹٲޱ���
	printf("\n");
}

int main()
{
	int gamestate = 1;
	int gameCount = 1;
	int myAnswer;

	while (gamestate)
	{
		int clap = getClapCount(gameCount);
		if (gameCount % 4 == 0)
		{
			// user ����
			printf("[user] : ");
			scanf("%d", &myAnswer);
			// 3�� ����� ������ ���� ��
			if (clap > 0)
			{
				if (myAnswer + clap != 0)
				{
					gamestate = 0;
				}
				else
				{
					printf("[user] : ");
					printClap(clap);
				}
			}
			else
			{
				if (myAnswer != gameCount)
				{
					gamestate = 0;
				}
			}

		}
		else{
			// computer ����
			printf("[computer%d] : ", gameCount % 4);
			if (clap > 0)
			{
				printClap(clap);
			}
			else
			{
				// ���ڸ� ���
				printf("%d\n", gameCount);
			}
		}
		gameCount++;
	}
	return 0;
}
