#include <stdio.h>

int main(void){

	int data, plan, basic, price, tax; //�Է� ���� �����;�� ����, �⺻���, ���� ���� ����� int �ڷ��� ���� ����
	int result; //�� �ݾ��� ������ ����� ���� ����

	printf("�÷�: ");
	scanf("%d", &plan);

	if (plan == 1) //������ �Է� ���� �÷��� 1�� ��� (������ �����)
	{
		basic = 5000;
		price = 50000;
		tax = (int)((basic + price)*0.1); //�⺻��ݰ� ������ �տ� 10%(=0.1)�� ����� ������ ���Ѵ�.
		result = basic + price + tax; //�⺻���, ����, ������ ���� ����� ����
		printf("������ ����� ���:: �⺻��: %d,%.3d��, ����: %d,%.3d��, ����: %d,%.3d��, ����հ�: %d,%.3d��\n", 
			basic/1000,basic % 1000 ,price/1000, price%1000, tax/1000, tax%1000, result/1000, result%1000);
	}
	else if (plan == 2) //������ �Է� ���� �÷��� 2�� ���(������ �����)
	{
		printf("�����ͻ�뷮: ");
		scanf("%d", &data); //����� �����;翡 ���� ����ϱ� ���� �Է� �ޱ�
		price = 0; //���� ����� ���� �ʱ�ȭ ���ش�. ������ ������ �����߻�

		if (data>0){ //data�� 0���� Ŭ �� ���ǹ��� ����� �� �ֵ��� �ɾ��ش�.
			if (2000 < data){
				price = 500 * 20 + 500 * 15 + 1000 * 12 + (data - 2000) * 10;
			}
			else if (1000 < data){
				price = 500 * 20 + 500 * 15 + (data - 1000) * 12;
			}
			else if (500 < data){
				price = 500 * 20 + (data - 500) * 15;
			}
			else if (data <= 500){
				price = data * 20;
			}
			//����� ��ݿ� ���� ���Ḧ �� ���� �������
		}
		basic = 6000;
		tax = (int)((basic + price)*0.15); //���� 15%
		result = basic + price + tax;
		printf("������ ����� ���:: �⺻��: %d,%.3d��, ����(%.3lfGB): %d,%.3d��, ����: %d,%.3d��, ����հ�: %d,%.3d��\n",
			basic/1000, basic%1000, (double)data/1000, (price+basic)/1000, (price+basic)%1000, tax/1000, tax%1000, result/1000, result%1000);
	}

	return 0;
}