#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct person
{
	char name[10];
	int score[4];
	struct date birthday;
};

void output_info(struct person *info, int size)
{
	int sum;
	for (int i = 0; i < size; i++)
	{
		printf("%s %d-%d-%d ", info[i].name, info[i].birthday.year, info[i].birthday.month, info[i].birthday.day);
		sum = 0;
		for (int k = 0; k < 4; k++)
		{
			sum += info[i].score[k];
			printf("%d ", info[i].score[k]);
		}
		printf("%d %.2lf\n", sum, (double)sum / 4);
	}
}

void change_name(struct person *info, char *fname, char *nname, int size)
{
	int index;
	int bool = 0;
	printf(">>¹Ù²ï¸í´Ü\n");
	for (int i = 0; i < size; i++)
	{
		if (strcmp(info[i].name, fname) == 0)
		{
			index = i;
			bool = 1;
			break;
		}
	}
	if (bool)
	{
		strcpy(info[index].name, nname);
	}
	else
	{
		printf("ÇØ´ç ÀÌ¸§ %s Àº(´Â) Á¸ÀçÇÏÁö ¾Ê½À´Ï´Ù.", fname);
	}

}

int main()
{
	struct person info[5] = {
		{ .name = "±è±æµ¿", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "±è¼¼¿µ", .birthday = { .year = 1994, .month = 6, .day = 6 }, .score[0] = 20, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "ÀåÈ«¼ö", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "±è¿µÈñ", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "¹ÚÁß¼ö", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	output_info(info, sizeof(info)/sizeof(struct person));

	change_name(info, "±è±æµ¿", "Á¤¹Î¿µ", sizeof(info) / sizeof(struct person));
	output_info(info, sizeof(info) / sizeof(struct person));
}