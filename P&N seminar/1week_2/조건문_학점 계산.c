#include <stdio.h>

int main()
{
	int a;//받을 수를 선언

	printf("점수를 입력하세요.\n");//점수 입력하라는 출력문
	scanf_s("%d", &a);//점수를 입력 하기 위한 scanf_s 와 짝지 &

	//조건문 90점 이상 -> A등급 출력
	if (a >= 90)
	{
		printf("A등급 입니다.");
	}
	//조건문 80점 이상 -> B등급 출력
	else if (a >= 80)
	{
		printf("B등급 입니다.");
	}
	//조건문 70점 이상 -> C등급 출력
	else if (a >= 70)
	{
		printf("C등급 입니다.");
	}
	//조건문 69점 이하 -> E등급 출력
	else
	{
		printf("E등급 입나다.");
	}
}