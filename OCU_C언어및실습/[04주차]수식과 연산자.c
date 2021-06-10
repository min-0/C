#include <stdio.h>//입출력을 위한 헤더 파일 코드
#include <math.h>//수학 함수를 사용하기 위한 헤더 파일 코드

int main(void)
{
	double input;
	scanf("%lf", &input);//한 변의 길이인 부동소수점, 즉 실수 입력받기

	//정삼각형 넓이 공식: sqrt(3)/4 * pow(a, 2)
	double width = sqrt(3) / 4 * pow(input, 2);
	//제곱근을 위해 sqrt 사용, 지수함수 표현을 위해 pow 사용

	printf("%lf\n", width);

	return 0;
}