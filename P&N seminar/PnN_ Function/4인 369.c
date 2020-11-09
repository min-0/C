#include <stdio.h>

int getClapCount(int number)
{
	// 박수의 개수
	int count = 0;
	// 각 자리수 체크 알고리즘
	for (int i = number; i > 0; i /= 10)
	{
		// 각 자리수(i%10)이 3의 배수인가?
		if ((i % 10) % 3 == 0 && i % 10 != 0)
			count++;
	}
	return count;
}

void printClap(int count)
{
	// 카운트 개수만큼 박수출력
	for (int i = 0; i < count; i++)
	{
		printf("짝! ");
	}
	// 마무리 줄바꿈까지
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
			// user 차례
			printf("[user] : ");
			scanf("%d", &myAnswer);
			// 3의 배수를 가지고 있을 때
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
			// computer 차례
			printf("[computer%d] : ", gameCount % 4);
			if (clap > 0)
			{
				printClap(clap);
			}
			else
			{
				// 숫자를 출력
				printf("%d\n", gameCount);
			}
		}
		gameCount++;
	}
	return 0;
}
