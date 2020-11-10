#include <stdio.h>

int main()
{
	int q[5];
	int i = 0;
	int cnt = 0;
	int sum = 0;
	double avg = 0;
	printf("5명의 점수를 순서대로 입력하세요\n");

	for (i = 1; i <= 5; i++)
	{
		printf("%d번의 퀴즈 점수는? : ", i);
		scanf("%d", &q[i]);
		sum += q[i];
	}
	avg = (double)sum / 5;
	for (i = 1; i <= 5; i++)
	{
		if (q[i] < avg)
		{
			cnt++;
		}
	}
	printf("========================\n");
	printf("번호 점수 평균과차이\n");
	printf("========================\n");
	for (i = 1; i <= 5; i++)
	{
		printf("%d  %d  %.1lf\n", i, q[i], q[i] - avg);
	}
	printf("========================\n");
	printf("평균 : %.1lf\n", avg);
	printf("========================\n");
	printf("평균 미만 : %d명\n", cnt);
}