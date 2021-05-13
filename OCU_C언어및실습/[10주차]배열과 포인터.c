#include <stdio.h>
#include <stdlib.h> //난수 생성을 위한 헤더 파일
#include <time.h> //난수 생성을 위한 헤더 파일

void EnglishScore(int *score){
	srand((unsigned int)time(NULL)); //난수 생성을 위한 선언

	for (int i = 0; i < 100; ++i){
		*(score + i) = rand() % 101; //랜덤한 큰 수에서 101로 나눈 나머지 값으로 난수 생성
	}
}
void grade(int *score){ 
	int temp;
	for (int i = 0; i < 100; i++){ //100개 성적 정렬
		for (int k = 0; k < 99 - i; k++){
			if (*(score + k) < *(score + k + 1)){ //자기자신과 다음 수가 자기보다 클 때
				temp = *(score + k); //자기 값 temp에 저장
				*(score + k) = *(score + k + 1); //자리 바꿔주기
				*(score + k + 1) = temp; // 되돌려주기
			}
		}
	}
}
void show(int *score){ 
	int rank = 1; //등수는 1부터
	int cnt = 0; //같은 성적 확인용
	char grade;
	for (int i = 0; i < 100; i++){
		if (rank <= 10) grade = 'A'; //1~10 A
		else if (rank <= 25) grade = 'B'; //11~25 B
		else if (rank <= 50) grade = 'C'; //26~50 C
		else if (rank <= 80) grade = 'D'; //51~80 D
		else grade = 'F'; //81~ F
		printf("[%3d, %c,%3d]", rank, grade, *(score + i)); //출력 형식에 맞춰 세자리 수를 고려하여 출력
		if ((i + 1) % 5 == 0) printf("\n"); //5개씩 끊어 줄바꿈
		if (*(score + i) == *(score + i + 1))cnt++; //앞 뒤로 성적이 같을 때 cnt만 증가
		else{ // 앞 뒤 성적이 다를 때
			rank = rank + cnt + 1; //쌓인 cnt수와 등수만큼 넣기
			cnt = 0; //cnt 초기화
		}
	}
}
int main(){
	printf("\t<<100명 학생의 영어 성적 산출 결과>>\n\n");
	int score[100]; //100명 학생 성적 배열 생성
	EnglishScore(score); //난수 생성 함수 호출
	grade(score); //성적 정렬 함수 호출
	show(score); //성적 결과 산출 및 출력 함수 호출
}