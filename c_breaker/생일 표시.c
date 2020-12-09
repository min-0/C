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
		printf("�ٲ��̸� �Է� >> ");
		scanf("%s", sname);
		strcpy(p[index].name, sname);
	}
	else
	{
		printf("%s��(��) ���Ӹ��� ���� �༮��\n", s);
	}
}

void list_birthday_byMonth(struct person *p, int size)
{
	int cnt = 0;
	int index;

	for (int i = 1; i <= 12; i++)
	{
		cnt = 0;
		for (int k = 0; k < size; k++)
		{
			if (i == p[k].birthday.month)
			{
				if (++cnt > 1)
				{
					printf(", %s", p[k].name);
				}
				else
				{
					printf("%2d�� ���� : %s", i, p[k].name);
				}
			}
		}
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

	int size = sizeof(persons) / sizeof(struct person);
	output_info(persons, 5); //�迭 == ������
	change_name(persons, "��浿", size); // �ٲ� �̸� ���� �Է�
	output_info(persons, size);
	list_birthday_byMonth(persons, size);
}
/*

>> size ������ �ʰ� ���ϴ� ��

for (int i = 0; i < sizeof(p); i++)

>>size ���ϴ� ���

printf("%d %d , sizeof(persons) - �迭 ��ü ũ��, sizeof(struct person) - person ����ü ũ��)

*/