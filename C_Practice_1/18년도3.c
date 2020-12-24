#include <stdio.h>

struct date
{
	int year;
	int month;
};

struct person
{
	char name[10];
	int score[4];
	double avg;
	struct date birthday;
};

void list_byBirthYear(struct person *team, int size)
{
	int cnt;

	for (int i = 1990; i < 2000; i++)
	{
		cnt = 0;
		for (int k = 0; k < size; k++)
		{
			if (i == team[k].birthday.year)
			{
				cnt++;
				if (cnt > 1)
				{
					printf(", %s", team[k].name);
				}
				else
				{
					printf("%d¿ù »ýÀÏ : %s", i, team[k].name);
				}
			}
		}
		if (cnt != 0)
			printf("\n");
	}
}

int main()
{
	struct person team[5] = {
		{ .name = "±è±æµ¿", .birthday = { .year = 1990, .month = 7 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "±è¼¼¿µ", .birthday = { .year = 1994, .month = 6 }, .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "ÀåÈ«¼ö", .birthday = { .year = 1990, .month = 10 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "±è¿µÈñ", .birthday = { .year = 1995, .month = 4 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "¹ÚÁ¾¼ö", .birthday = { .year = 1991, .month = 4 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	list_byBirthYear(team, sizeof(team) / sizeof(struct person));
}