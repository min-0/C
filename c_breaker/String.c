#include <stdio.h>
#include <string.h>

int main()
{
	char arr[20];
	char arr2[10];

	gets(&arr);

	printf("\nstrlen >> %d\n",strlen(arr));//����Ʈ ���

	printf("\nstrcpy >> %s\n", strcpy(arr2, arr));//�ι�° �μ��� ù��° �μ��� �Ѿ

	gets(&arr2);

	printf("\nstrcmp >> %d\n", strcmp(arr, arr2));//�� �μ��� ���� �� 0, ù �μ��� �ι�° �μ����� Ŭ �� 1(�ƽ�Ű�ڵ�� ��), �� �μ��� �ٸ� �� -1 

	printf("\nstrcat >> %s\n", strcat(arr, arr2));//�� �μ� ���� �ι�°�� ù��° �μ��� ���յ� >> ù��° �μ��� ũ��� �ι�°���� Ŀ����
}