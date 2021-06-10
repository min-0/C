#include <stdio.h>
#include <malloc.h>

char* gRead(FILE* fp){
	char* line = malloc(250 * sizeof(char)); //������ line�� 250��ŭ �����Ҵ���

	if (line != NULL){ //�����Ҵ��� ���� ��
		fgets(line, _msize(line), fp); //line ũ�⸸ŭ ������ �о�� ������.
	}
	return line;
}

void gPrint(char* line[], int index){
	for (int i = 0; i < index; i++){
		printf("%s", line[i]); //�� ���
		free(line[i]); //free�� �����Ҵ� ��ȯ
	}
	printf("\n");
}

int main(){
	FILE* fp; //���� ������ ����
	fp = fopen("sample01.txt", "r"); //������ �б������ ���� fp�� ���� �ϱ�
	char* sample[8]; //�� ������ ������ �迭 ����

	if (fp != NULL){ //���������� ������ ���� ���
		int i = 0;
		while (1){
			sample[i++] = gRead(fp); //������ �о�� sample �迭�� ����
			if (feof(fp)) break; //���� ������ �� ������ �ݺ��� ����
		}
		fclose(fp); //fp�� ����� .txt ���� �ݰ� ���� ����
		gPrint(sample, i); //sample �迭�� ����� �� ���
	}
	else printf("�ش� ������ ã�� �� �����ϴ�.\n"); //���� ���� ���� ó��
}
