#include <stdio.h>

int main(void){

	int data, plan, basic, price, tax; //입력 받을 데이터양과 사용료, 기본요금, 세금 등을 계산할 int 자료형 변수 선언
	int result; //총 금액을 저장할 결과값 변수 선언

	printf("플랜: ");
	scanf("%d", &plan);

	if (plan == 1) //위에서 입력 받은 플랜이 1일 경우 (무제한 요금제)
	{
		basic = 5000;
		price = 50000;
		tax = (int)((basic + price)*0.1); //기본요금과 사용료의 합에 10%(=0.1)를 계산해 세금을 구한다.
		result = basic + price + tax; //기본요금, 사용료, 세금을 합한 결과값 도출
		printf("무제한 요금제 요금:: 기본료: %d,%.3d원, 사용료: %d,%.3d원, 세금: %d,%.3d원, 요금합계: %d,%.3d원\n", 
			basic/1000,basic % 1000 ,price/1000, price%1000, tax/1000, tax%1000, result/1000, result%1000);
	}
	else if (plan == 2) //위에서 입력 받은 플랜이 2일 경우(종량제 요금제)
	{
		printf("데이터사용량: ");
		scanf("%d", &data); //사용한 데이터양에 따라 계산하기 위해 입력 받기
		price = 0; //사용료 계산을 위해 초기화 해준다. 해주지 않으면 오류발생

		if (data>0){ //data가 0보다 클 때 조건문이 실행될 수 있도록 걸어준다.
			if (2000 < data){
				price = 500 * 20 + 500 * 15 + 1000 * 12 + (data - 2000) * 10;
			}
			else if (1000 < data){
				price = 500 * 20 + 500 * 15 + (data - 1000) * 12;
			}
			else if (500 < data){
				price = 500 * 20 + (data - 500) * 15;
			}
			else if (data <= 500){
				price = data * 20;
			}
			//사용한 요금에 따라 사용료를 한 번에 계산해줌
		}
		basic = 6000;
		tax = (int)((basic + price)*0.15); //세금 15%
		result = basic + price + tax;
		printf("종량제 요금제 요금:: 기본료: %d,%.3d원, 사용료(%.3lfGB): %d,%.3d원, 세금: %d,%.3d원, 요금합계: %d,%.3d원\n",
			basic/1000, basic%1000, (double)data/1000, (price+basic)/1000, (price+basic)%1000, tax/1000, tax%1000, result/1000, result%1000);
	}

	return 0;
}