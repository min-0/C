#include <stdio.h>
int main()
{
	int a; //받을 첫번째 수 선언
	int b; //받을 두번째 수 선언

	printf("첫번째 수를 입력하세요.\n");//첫번째 수를 입력하라는 출력문
	scanf_s("%d", &a);//입력받는 scanf_s 와 짝지 &
	printf("두번째 수를 입력하세요.\n");//두번째 수를 입력하라는 출력문
	scanf_s("%d", &b);//입력받는 scanf_s 와 짝지 &

	//조건문 첫번째 수와 두번째 수 비교 후 출력
	if (a == b)
	{
		printf("첫번째 수와 두번째 수는 같습니다.");
	}
	else if (a > b)
	{
		printf("첫번째 수가 두번째 수보다 큽니다.");
	}
	else
	{
		printf("두번째 수가 첫번째 수보다 큽니다.");
	}
}