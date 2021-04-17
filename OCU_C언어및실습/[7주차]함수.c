#include <stdio.h>

int time(int minute){ //Main에서 입력 받은 분 10단위로 절상할 time함수
	if (minute % 10 != 0){
		int temp;
		temp = minute % 10; //10으로 나눴을 때 나머지를
		temp = 10 - temp; //10에서 나머지 만큼 빼고
		minute += temp; //분에 뺀 값을 넣으면 분이 10단위로 만들어진다.
	}
	return minute; //계산된 분 반환
}
int calculate(int hour, int minute){ //Main에서 입력 받은 시와 분 계산할 calculate함수
	int sum = 0; //요금을 저장할 변수 초기화
	if (hour >= 4 && hour <= 24){ //4~24시간은 무조건 25,000원 조건
		sum += 25000;
	}
	else if (hour > 24){ //25시간부터 25,000원에 초과된 시만큼 요금 추가
		sum += (hour / 24) * 25000 + (hour % 24) * 1000 * 6 + (minute / 10) * 1000;
	}
	else{ //위에 조건 외 즉, 4시간 미만 주차시 요금 계산
		sum += hour * 1000 * 6 + (minute/10) * 1000;
	}
	return sum; //주차요금 계산값 반환
}

int main(){
	int hour, minute, sum;
	printf("Hour, Minute 따로 입력>>\n");
	scanf("%d %d", &hour, &minute);
	printf("Time : %dH %dM\n", hour, minute);

	minute = time(minute);//입력 받은 분 계산을 위헤 time()로 값 전달
	if (minute == 60){ //입력 받은 분이 60분일 경우 hour에 증감하여 계산
		minute = 0;
		hour++;
	}
	sum = calculate(hour, minute); //입력 받은 시와 분으로 요금 계산을 위한 calculate()에 값 전달
	printf("Calculate : %d,%.3dwon\n", sum/1000, sum%1000);
}