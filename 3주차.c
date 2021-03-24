#include <stdio.h> //전처리기 영역, 입출력을 위해 필요한 헤더 파일 코드

int main(void) //main 함수 영역
{
	double Numd; //입력 받을 double형 변수 선언
	short int Numi;

	scanf("%lf", &Numd);

	Numi = Numd; //입력 받은 실수를  int형 변수에 대입

	printf("실수형 변수 %lf, 정수형 변수 %lf\n", Numd, (double)Numi);
	//Numi는 int형을 %lf로 출력하기 위해 강제로 double형으로 변환

	return 0;
}