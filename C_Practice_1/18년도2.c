#include <stdio.h>

struct person
{
	char name[10];
	int score[4];
	double avg;
};

void cal_avg(struct person *team, int size)
{
	int sum;
	for (int i = 0; i < size; i++)
	{
		sum = 0;
		for (int k = 0; k < 4; k++)
		{
			sum += team[i].score[k];
			team[i].avg = (double)sum/4;
		}
	}
}

void output_info(struct person *team, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s ", team[i].name);
		for (int k = 0; k < 4; k++)
		{
			printf("%d/", team[i].score[k]);
		}
		printf("\b - %.2lf\n", team[i].avg);
	}
}

int main()
{
	struct person team[5] = {
		{ .name = "±è±æµ¿", .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "±è¼¼¿µ", .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "ÀåÈ«¼ö", .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "±è¿µÈñ", .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "¹ÚÁ¾¼ö", .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	cal_avg(team, sizeof(team) / sizeof(struct person));
	output_info(team, sizeof(team) / sizeof(struct person));
}