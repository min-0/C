#include <stdio.h>

int main()
{
	int q[5];
	int i = 0;
	int cnt = 0;
	int sum = 0;
	double avg = 0;
	printf("5���� ������ ������� �Է��ϼ���\n");

	for (i = 1; i <= 5; i++)
	{
		printf("%d���� ���� ������? : ", i);
		scanf("%d", &q[i]);
		sum += q[i];
	}
	avg = (double)sum / 5;
	for (i = 1; i <= 5; i++)
	{
		if (q[i] < avg)
		{
			cnt++;
		}
	}
	printf("========================\n");
	printf("��ȣ ���� ��հ�����\n");
	printf("========================\n");
	for (i = 1; i <= 5; i++)
	{
		printf("%d  %d  %.1lf\n", i, q[i], q[i] - avg);
	}
	printf("========================\n");
	printf("��� : %.1lf\n", avg);
	printf("========================\n");
	printf("��� �̸� : %d��\n", cnt);
}