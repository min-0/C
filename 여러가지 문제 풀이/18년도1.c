#include <stdio.h>

struct person
{
	char name[10];
	int score[4];
	double avg;
};

void output_info(struct person *team, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s ", team[i].name);
		for (int k = 0; k < 4; k++)
		{
			printf("%d/", team[i].score[k]);
		}
		printf("\b - %.1lf\n", team[i].avg);
	}
}

int main()
{
	struct person team[5] = {
		{ .name = "��浿", .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "�輼��", .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "��ȫ��", .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "�迵��", .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "������", .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	output_info(team, sizeof(team) / sizeof(struct person));
}