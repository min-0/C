#include <stdio.h>
#include <string.h>

int main()
{
	char arr[20];
	char arr2[10];

	gets(&arr);

	printf("\nstrlen >> %d\n",strlen(arr));//바이트 출력

	printf("\nstrcpy >> %s\n", strcpy(arr2, arr));//두번째 인수가 첫번째 인수로 넘어감

	gets(&arr2);

	printf("\nstrcmp >> %d\n", strcmp(arr, arr2));//두 인수가 같을 때 0, 첫 인수가 두번째 인수보다 클 때 1(아스키코드로 비교), 두 인수가 다를 때 -1 

	printf("\nstrcat >> %s\n", strcat(arr, arr2));//두 인수 병합 두번째가 첫번째 인수에 병합됨 >> 첫번째 인수의 크기는 두번째보다 커야함
}