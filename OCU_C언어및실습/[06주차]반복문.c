#include <stdio.h>
#include <math.h>

int main(){
	int exam, report, attend; //���ʷ� ����, ����, �⼮ ���� ����
	int sum = 0; //���� �հ� ����� ���� ����
	double res = 0.0; //���� ����� ���� ����

	int check = 0; //���� Ƚ�� Ȯ�ο� ����
	int isCheck = 0; //���� ���� Ȯ�ο� ����
	int i = 0;
	while (i < 10){ //10�� �л��� ���� �ݿ�
		isCheck = 0; //ó�� ������ ���� ���� ���� 0

		printf("���輺��, ��������, �⼮������ ���ʷ� �Է��ϼ���.\n");
		scanf("%d %d %d", &exam, &report, &attend); //���ʷ� �� ���� �Է� �ޱ�

		if (exam < 0 || exam > 100){ //���輺�� ���� ���� ��
			printf("���輺���� 0�� 100 ���̷� �Է����ּ���.\n");
			isCheck = 1; //���� ���� Ȯ��++
		}
		if (report < 0 || report > 100){ //�������� ���� ���� ��
			printf("���������� 0�� 100 ���̷� �Է����ּ���.\n");
			isCheck = 1; //���� ���� Ȯ��++
		}
		if (attend < 0 || attend > 45){ //�⼮���� ���� ���� ��
			printf("�⼮������ 0�� 45 ���̷� �Է����ּ���.\n");
			isCheck = 1; //���� ���� Ȯ��++
		}

		if (isCheck == 1){ //���� �߻� ��
			check++; //���� Ƚ�� ����
			if (check >= 3) //���� 3�� �߻� �� 
			{
				printf("�Է� �� ������ ���α׷��� �����մϴ�.\n");
				return 0; //while�� ����
			}
			continue; //���� 3�� �̸� �߻� �� �ٽ� ���ư� ���Է� �޵��� ��
		}

		if (attend < 30){ //�⼮ ������ 30�� �̸��� ��� �ٷ� F���� ���
			printf("F\n");
		}
		else{
			sum = exam + report + attend; //����+����+�⼮ �հ�
			res = sum / 245.0 * 100; //245�� ���� ���� ����� ���
			res = round(res); //���� ��� �ݿø�
			if (res > 90) printf("A+\n");//91 ~ 100 A+
			else if (res > 80) printf("A\n");//81 ~ 90 A
			else if (res > 70) printf("B+\n");//71 ~ 80 B+
			else if (res > 60) printf("B\n");//61 ~ 70 B
			else if (res > 50) printf("C+\n");//51 ~ 60 C+
			else if (res > 40) printf("C\n");//41 ~ 50 C
			else if (res > 30) printf("D+\n");//31 ~ 40 D+
			else if (res > 20) printf("D\n");//21 ~ 30 D
			else printf("F\n");//20 �̸� F
		}
		i++;//�ݺ����� ����++
	}
}