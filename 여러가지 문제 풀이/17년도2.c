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
	printf(">>바뀐명단\n");
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
		printf("해당 이름 %s 은(는) 존재하지 않습니다.", fname);
	}

}

void list_birthday_byMonth(struct person *info, int size)
{
	int cnt;

	for (int i = 1; i <= 12; i++)
	{
		cnt = 0;
		for (int k = 0; k < size; k++)
		{
			if (i == info[k].birthday.month)
			{
				cnt++;
				if (cnt > 1)
				{
					printf(", %s", info[k].name);
				}
				else
				{
					printf("%2d월 생일 : %s ", i, info[k].name);
				}
			}
		}
		if (cnt != 0)
		printf("\n");
	}
}
int main()
{
	struct person info[5] = {
		{ .name = "김길동", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "김세영", .birthday = { .year = 1994, .month = 6, .day = 6 }, .score[0] = 20, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "장홍수", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "김영희", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "박중수", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	output_info(info, sizeof(info) / sizeof(struct person));

	change_name(info, "김길동", "정민영", sizeof(info) / sizeof(struct person));
	output_info(info, sizeof(info) / sizeof(struct person));
	list_birthday_byMonth(info, sizeof(info) / sizeof(struct person));
}