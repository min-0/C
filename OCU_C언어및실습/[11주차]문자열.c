#include <stdio.h>
#include <string.h> //strlen()�� ����ϱ� ���� ��� ����

void string(char *str){ //���ڿ� �Է°� ����� ���� �Լ�
	printf("�Էµ� ���ڿ�: ");
	gets(str); //������ ������ ���ڿ� �Է�
	printf("���ڿ� ���� ����: %d ", strlen(str)); //strlen()�� ���ڿ� ���� ���
}

void search(char *str){ //���ڸ� Ž���ϱ� ���� �Լ�
	char alpha; //Ž���� ���� ����
	int cnt = 0; //Ž���� ���� ������ ���� ����
	printf("\nŽ���� ����: ");
	scanf("%c", &alpha); //���� ���� ���� �Է�

	for (int i = 0; i < strlen(str); i++){ //���ڿ��� ���̸�ŭ �ݺ��� ����
		if (str[i] == alpha) cnt++; //���ڿ��� Ž���� ���ڰ� ������ count++
	}
	printf("Ž������ ����: %d\n", cnt); //count ��� == Ž�� ���� ����
}

int main(){
	char str[100]; //���� �迭 ����
	string(str); //���� �迭 �Ű����� ����
	search(str); //���� �迭 �Ű����� ����
	
}