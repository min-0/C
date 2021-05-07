#include <stdio.h>
#include <stdlib.h> //난수 생성을 위한 헤더 파일
#include <time.h> //난수 생성을 위한 헤더 파일

void sum_ave(int array[],int *ave, int *mid){ //포인터 매개변수
	int sum = 0; //합계를 위한 변수 sum 초기화
	int temp; //정렬하기 위해 사용되는 복사본 변수 선언
	for (int i = 0; i < 100; i++){
		sum += array[i]; //배열에 모든 값 합하기
		for (int k = 0; k <99-i; k++){
			if (array[k] > array[k + 1]){ //정렬 조건 -> 다음 수가 자기 자신보다 작을 경우
				temp = array[k]; //값 보존을 위해 잠시 복사
				array[k] = array[k + 1]; //자리 바꾸기
				array[k+1] = temp; //다시 돌려주기
			}
		}
		*ave = sum / 100; //평균 구하기
	}
	*mid = array[50]; // 정렬 후 0~99 사이에 중간 값은 50번째 수
		printf("중간값: %d, 평균값: %d\n\n", *mid, *ave);
	for (int i = 0; i < 100; i++){ //전체 원소 출력
		printf("[%.3d]: %.5d ",i, array[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
}

int main(){
	srand((unsigned int)time(NULL)); //난수 생성을 위한 선언
	int array[100]; //배열 크기 선언
	for (int i = 0; i < 100; i++){
		array[i] = rand(); //배열에 난수 입력
	}
	int ave, mid;
	mid = 0; //중간 값 초기화
	sum_ave(array, &ave, &mid); //함수 호출과 포인터 매개변수 전달
	
}