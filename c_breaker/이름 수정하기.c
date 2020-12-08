#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct  person
{
	char name[10];
	int score[4];
	struct date birthday; //구조체 안에 구조체
};

void output_info(struct person *p, int size)
{

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		printf("%s %d-%d-%d ", p[i].name, p[i].birthday.year, p[i].birthday.month, p[i].birthday.day);//구조체 안에 구조체 부르기
		for (int k = 0; k < 4; k++)
		{
			printf("%d ", p[i].score[k]);
			sum += p[i].score[k];
		}
		printf("%d %.2lf\n", sum, (double)sum / 4);
	}
}

void change_name(struct person *p, char *s, int size)
{
	int index;
	int bool = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (strcmp(s, p[i].name) == 0)
		{
			bool = 1;
			index = i;
			break;
		}

	}
	if (bool)
	{
		char sname[10];
		printf("바꿀이름 입력 >> ");
		scanf("%s", sname);
		strcpy(p[index].name, sname);
	}
	else
	{
		printf("%s은(는) ㅇㅣ름이 없다 녀석아\n", s);
	}
}

int main()
{
	struct person persons[5] = {
		{ .name = "김길동", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "김세영", .birthday = { .year = 1994, .month = 6, .day = 20 }, .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "장홍수", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "김영희", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "박종수", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	int size = sizeof(persons) / sizeof(struct person);
	output_info(persons, 5); //배열 == 포인터
	change_name(persons, "김길동", size); // 바뀔 이름 인자 입력
	output_info(persons, size);
}
/*

>> size 정하지 않고 구하는 법

for (int i = 0; i < sizeof(p); i++)

>>size 구하는 방법

printf("%d %d , sizeof(persons) - 배열 전체 크기, sizeof(struct person) - person 구조체 크기)

*/