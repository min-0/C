#include <stdio.h>//������� ���� ��� ���� �ڵ�
#include <math.h>//���� �Լ��� ����ϱ� ���� ��� ���� �ڵ�

int main(void)
{
	double input;
	scanf("%lf", &input);//�� ���� ������ �ε��Ҽ���, �� �Ǽ� �Է¹ޱ�

	//���ﰢ�� ���� ����: sqrt(3)/4 * pow(a, 2)
	double width = sqrt(3) / 4 * pow(input, 2);
	//�������� ���� sqrt ���, �����Լ� ǥ���� ���� pow ���

	printf("%lf\n", width);

	return 0;
}