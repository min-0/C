#include <stdio.h>
#include <string.h> //strlen()을 사용하기 위한 헤더 파일

void string(char *str){ //문자열 입력과 출력을 위한 함수
	printf("입력된 문자열: ");
	gets(str); //공백을 포함한 문자열 입력
	printf("문자열 문자 개수: %d ", strlen(str)); //strlen()로 문자열 길이 출력
}

void search(char *str){ //문자를 탐색하기 위한 함수
	char alpha; //탐색할 문자 선언
	int cnt = 0; //탐색한 문자 개수를 위한 선언
	printf("\n탐색된 문자: ");
	scanf("%c", &alpha); //공백 없이 문자 입력

	for (int i = 0; i < strlen(str); i++){ //문자열의 길이만큼 반복문 실행
		if (str[i] == alpha) cnt++; //문자열에 탐색할 문자가 있으면 count++
	}
	printf("탐색문자 개수: %d\n", cnt); //count 출력 == 탐색 문자 개수
}

int main(){
	char str[100]; //문자 배열 선언
	string(str); //문자 배열 매개변수 전달
	search(str); //문자 배열 매개변수 전달
	
}