#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct student
{
	char name[10];
	int num;
	int age;
	char address[10];
};
void ArrangeByCity(struct student *Aclass, int size)
{
	char **AArray; // �л� ���ڿ� ������ ���� �迭(���� ū ��)
	int cnt = 0; // ��� ���� ũ�⸦ Ȯ���� ����
	for (int i = 0; i < size; i++) //�л� ������ ��� �ȴ´�
	{
		int exist = 0; // ���翩�� �Ǵ��� ���� ����
		if (cnt == 0) // �� ó�� �� �� cnt�� 0�̹Ƿ� �ٷ� if�� ��
		{
			AArray = (char**)malloc(sizeof(char*)* ++cnt); // ���� ū �� ũ�� �Ҵ�
			AArray[0] = (char*)malloc(sizeof(char) * 10); // ū �� �ȿ� ���ڿ� ũ�� �Ҵ�
			strcpy(AArray[0], Aclass[i].address); // ù��° �ڸ��� ���� �ּҰ��� �ִ´�
		}
		else // �ι�° �� ���� ����� �Ѿ��
		{
			for (int k = 0; k < cnt; k++) //��� Ȯ��
			{
				if (strcmp(AArray[k], Aclass[i].address) == 0)
				{
					exist++; // ���ڿ� �񱳸� ���� ������ ���� ������ ����
				}

			}
			if (exist == 0) // �������� ���� �� �迭�� �־���� ��
			{
				char **tmparr = (char**)malloc(sizeof(char*)*cnt); //�� ������ �̸� �����صα�
				for (int k = 0; k < cnt; k++) 
				{
					tmparr[k] = (char*)malloc(sizeof(char) * 10);
					strcpy(tmparr[k], AArray[k]);
				}

				AArray = (char**)malloc(sizeof(char*)*++cnt); //���� �� ũ�� Ȯ��
				for (int j = 0; j < cnt; j++) //���� �׸� �� �뿡 �ű��
				{
					AArray[j] = (char*)malloc(sizeof(char) * 10);
					if (j != cnt - 1) // ������ �ڸ� ���ΰ� �����ص� �� �뿡 ����
						strcpy(AArray[j], tmparr[j]);
				}
				strcpy(AArray[cnt - 1], Aclass[i].address); // ���� �ּ� �� �뿡 �ֱ� 
			}
		}
	}
	for (int i = 0; i < cnt; i++) //���
	{
		printf("%s\n", AArray[i]);
	}
}

void Citylist(struct student *Aclass, int size)
{
	int cnt = 1;

	struct student **infoarr;

	infoarr = (char**)malloc(sizeof(char*)*cnt);

	for (int index = 0; index < size; index++)
	{
		if (index == 0)
		{
			infoarr[0] = (struct student*)malloc(sizeof(struct student));

			strcpy(infoarr[0][0].name, Aclass[0].name);
			infoarr[0][0].num = Aclass[0].num;
			infoarr[0][0].age = Aclass[0].age;
			strcpy(infoarr[0][0].address, Aclass[0].address);
		}
		else
		{
			int existindex = -1;
			for (int i = 0; i < cnt; i++)
			{
				if (strcmp(Aclass[existindex].address, infoarr[existindex][i].address) == 0)
				{
					existindex = i;
					break;
				}
			}

			if (existindex > -1)
			{
				int tmpcnt = (sizeof(infoarr[existindex]) / sizeof(struct student));
				struct student *tmpstudent = (struct student*)malloc(sizeof(struct student)*tmpcnt);
				for (int i = 0; i < tmpcnt; i++)
				{

				}
			}
		}
	}
}

int main()
{
	struct student Aclass[5] = {
		{ .name = "��浿", .num = 2010123, .age = 20, .address = "�λ��" },
		{ .name = "���μ�", .num = 2011134, .age = 19, .address = "����" },
		{ .name = "�ڼ���", .num = 2009235, .age = 21, .address = "�λ��" },
		{ .name = "�ڼ�ȫ", .num = 2010234, .age = 21, .address = "�λ��" },
		{ .name = "�����", .num = 2006525, .age = 24, .address = "â����" }
	};

	ArrangeByCity(Aclass, sizeof(Aclass)/sizeof(struct student));
}