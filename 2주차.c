#include <stdio.h> // 전처리기 영역, 입출력을 위해 필요한 헤더 파일 코드

int main(void) // main 함수 영역
{
	printf("환산할 정수를 입력하세요.(단위: ml)>> ");

	int ml;
	scanf("%d", &ml); // 정수 ml를 입력 받기 위함

	double liter;
	liter = (double)ml / 1000; // 1000ml = 1L 임을 계산 하기 위함, 정수와 소수점을 가지는 실수는 나누기 할 수 없어 ml를 double로 강제 형변형

	printf(">> %d ml는 %.3lf L 입니다.\n", ml, liter); //%.3lf는 실수의 소수점을 셋째자리 까지만 표시하겠다는 의미

	return(0); // 0을 반환하고 실행 중인 함수를 정상적으로 끝냄
}