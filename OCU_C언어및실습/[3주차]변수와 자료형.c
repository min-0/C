#include <stdio.h> //��ó���� ����, ������� ���� �ʿ��� ��� ���� �ڵ�

int main(void) //main �Լ� ����
{
	double Numd; //�Է� ���� double�� ���� ����
	short int Numi;

	scanf("%lf", &Numd);

	Numi = Numd; //�Է� ���� �Ǽ���  int�� ������ ����

	printf("�Ǽ��� ���� %lf, ������ ���� %lf\n", Numd, (double)Numi);
	//Numi�� int���� %lf�� ����ϱ� ���� ������ double������ ��ȯ

	return 0;
}