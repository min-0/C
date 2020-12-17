#include <stdio.h>
#include <string.h>

struct student
{
	char name[10];
	int score[4];
	int total;
};
void compute(struct student *Aclass, int size) //�л� ������ ��
{
	int sum;
	for (int i = 0; i < size; i++)
	{
		sum = 0;
		for (int k = 0; k < 4; k++)
		{
			sum += Aclass[i].score[k];
			Aclass[i].total = sum;
		}
	}
}
void list(struct student *Aclass, int size) //�л� ���� ���
{
	for (int i = 0; i < size; i++)
	{
		printf("(name)%s, ", Aclass[i].name);
		for (int k = 0; k < 4; k++)
		{
			printf("(score%d)%d, ", k+1, Aclass[i].score[k]);
		}
		printf("(total)%d \n", Aclass[i].total);
	}
}
int main()
{
	struct student Aclass[5] = {
		{ .name = "�輼��", .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 80 },
		{ .name = "��浿", .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "��ȫ��", .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 70 },
		{ .name = "�迵��", .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "������", .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};
	compute(Aclass, sizeof(Aclass)/sizeof(struct student));
	list(Aclass, sizeof(Aclass) / sizeof(struct student));
}