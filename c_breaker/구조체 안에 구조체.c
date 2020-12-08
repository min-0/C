#include <stdio.h>
#include <malloc.h>

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
		struct date birthday; //����ü �ȿ� ����ü
	};

void output_info(struct person *p, int size)
{

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		printf("%s %d-%d-%d ", p[i].name, p[i].birthday.year, p[i].birthday.month, p[i].birthday.day);//����ü �ȿ� ����ü �θ���
			for (int k = 0; k < 4; k++)
			{
				printf("%d ", p[i].score[k]);
				sum += p[i].score[k];
			}
			printf("%d %.2lf\n", sum, (double)sum / 4);
	}
}

int main()
{
	struct person persons[5] = {
		{ .name = "��浿", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "�輼��", .birthday = { .year = 1994, .month = 6, .day = 20 }, .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "��ȫ��", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "�迵��", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "������", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	output_info(persons, 5); //�迭 == ������
}
/*

>> size ������ �ʰ� ���ϴ� ��

for (int i = 0; i < sizeof(p); i++)

>>size ���ϴ� ���

printf("%d %d , sizeof(persons) - �迭 ��ü ũ��, sizeof(struct person) - person ����ü ũ��)

*/