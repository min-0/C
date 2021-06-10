#include <stdio.h>
#include <math.h>

int main(){
	int exam, report, attend; //차례로 시험, 과제, 출석 성적 변수
	int sum = 0; //성적 합계 계산을 위한 변수
	double res = 0.0; //학점 계산을 위한 변수

	int check = 0; //오류 횟수 확인용 변수
	int isCheck = 0; //오류 여부 확인용 변수
	int i = 0;
	while (i < 10){ //10명 학생의 성적 반영
		isCheck = 0; //처음 시작할 때는 오류 여부 0

		printf("시험성적, 과제성적, 출석성적을 차례로 입력하세요.\n");
		scanf("%d %d %d", &exam, &report, &attend); //차례로 한 번에 입력 받기

		if (exam < 0 || exam > 100){ //시험성적 범위 오류 시
			printf("시험성적은 0과 100 사이로 입력해주세요.\n");
			isCheck = 1; //오류 여부 확인++
		}
		if (report < 0 || report > 100){ //과제성적 범위 오류 시
			printf("과제성적은 0과 100 사이로 입력해주세요.\n");
			isCheck = 1; //오류 여부 확인++
		}
		if (attend < 0 || attend > 45){ //출석성적 범위 오류 시
			printf("출석성적은 0과 45 사이로 입력해주세요.\n");
			isCheck = 1; //오류 여부 확인++
		}

		if (isCheck == 1){ //오류 발생 시
			check++; //오류 횟수 증가
			if (check >= 3) //오류 3번 발생 시 
			{
				printf("입력 값 오류로 프로그램을 종료합니다.\n");
				return 0; //while문 종료
			}
			continue; //오류 3번 미만 발생 시 다시 돌아가 재입력 받도록 함
		}

		if (attend < 30){ //출석 성적이 30점 미만일 경우 바로 F학점 출력
			printf("F\n");
		}
		else{
			sum = exam + report + attend; //성적+과제+출석 합계
			res = sum / 245.0 * 100; //245점 만점 기준 백분율 계산
			res = round(res); //학점 결과 반올림
			if (res > 90) printf("A+\n");//91 ~ 100 A+
			else if (res > 80) printf("A\n");//81 ~ 90 A
			else if (res > 70) printf("B+\n");//71 ~ 80 B+
			else if (res > 60) printf("B\n");//61 ~ 70 B
			else if (res > 50) printf("C+\n");//51 ~ 60 C+
			else if (res > 40) printf("C\n");//41 ~ 50 C
			else if (res > 30) printf("D+\n");//31 ~ 40 D+
			else if (res > 20) printf("D\n");//21 ~ 30 D
			else printf("F\n");//20 미만 F
		}
		i++;//반복문에 조건++
	}
}