#include <stdio.h>
#include <stdlib.h> //���� ������ ���� ��� ����
#include <time.h> //���� ������ ���� ��� ����

void EnglishScore(int *score){
	srand((unsigned int)time(NULL)); //���� ������ ���� ����

	for (int i = 0; i < 100; ++i){
		*(score + i) = rand() % 101; //������ ū ������ 101�� ���� ������ ������ ���� ����
	}
}
void grade(int *score){ 
	int temp;
	for (int i = 0; i < 100; i++){ //100�� ���� ����
		for (int k = 0; k < 99 - i; k++){
			if (*(score + k) < *(score + k + 1)){ //�ڱ��ڽŰ� ���� ���� �ڱ⺸�� Ŭ ��
				temp = *(score + k); //�ڱ� �� temp�� ����
				*(score + k) = *(score + k + 1); //�ڸ� �ٲ��ֱ�
				*(score + k + 1) = temp; // �ǵ����ֱ�
			}
		}
	}
}
void show(int *score){ 
	int rank = 1; //����� 1����
	int cnt = 0; //���� ���� Ȯ�ο�
	char grade;
	for (int i = 0; i < 100; i++){
		if (rank <= 10) grade = 'A'; //1~10 A
		else if (rank <= 25) grade = 'B'; //11~25 B
		else if (rank <= 50) grade = 'C'; //26~50 C
		else if (rank <= 80) grade = 'D'; //51~80 D
		else grade = 'F'; //81~ F
		printf("[%3d, %c,%3d]", rank, grade, *(score + i)); //��� ���Ŀ� ���� ���ڸ� ���� ����Ͽ� ���
		if ((i + 1) % 5 == 0) printf("\n"); //5���� ���� �ٹٲ�
		if (*(score + i) == *(score + i + 1))cnt++; //�� �ڷ� ������ ���� �� cnt�� ����
		else{ // �� �� ������ �ٸ� ��
			rank = rank + cnt + 1; //���� cnt���� �����ŭ �ֱ�
			cnt = 0; //cnt �ʱ�ȭ
		}
	}
}
int main(){
	printf("\t<<100�� �л��� ���� ���� ���� ���>>\n\n");
	int score[100]; //100�� �л� ���� �迭 ����
	EnglishScore(score); //���� ���� �Լ� ȣ��
	grade(score); //���� ���� �Լ� ȣ��
	show(score); //���� ��� ���� �� ��� �Լ� ȣ��
}