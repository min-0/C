#include <stdio.h>
#include <stdlib.h> //���� ������ ���� ��� ����
#include <time.h> //���� ������ ���� ��� ����

void sum_ave(int array[],int *ave, int *mid){ //������ �Ű�����
	int sum = 0; //�հ踦 ���� ���� sum �ʱ�ȭ
	int temp; //�����ϱ� ���� ���Ǵ� ���纻 ���� ����
	for (int i = 0; i < 100; i++){
		sum += array[i]; //�迭�� ��� �� ���ϱ�
		for (int k = 0; k <99-i; k++){
			if (array[k] > array[k + 1]){ //���� ���� -> ���� ���� �ڱ� �ڽź��� ���� ���
				temp = array[k]; //�� ������ ���� ��� ����
				array[k] = array[k + 1]; //�ڸ� �ٲٱ�
				array[k+1] = temp; //�ٽ� �����ֱ�
			}
		}
		*ave = sum / 100; //��� ���ϱ�
	}
	*mid = array[50]; // ���� �� 0~99 ���̿� �߰� ���� 50��° ��
		printf("�߰���: %d, ��հ�: %d\n\n", *mid, *ave);
	for (int i = 0; i < 100; i++){ //��ü ���� ���
		printf("[%.3d]: %.5d ",i, array[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
}

int main(){
	srand((unsigned int)time(NULL)); //���� ������ ���� ����
	int array[100]; //�迭 ũ�� ����
	for (int i = 0; i < 100; i++){
		array[i] = rand(); //�迭�� ���� �Է�
	}
	int ave, mid;
	mid = 0; //�߰� �� �ʱ�ȭ
	sum_ave(array, &ave, &mid); //�Լ� ȣ��� ������ �Ű����� ����
	
}