#include <stdlib.h>

char* line; //전역변수 line 선언

void gSize(){ //동적할동 해주는 함수
	line = malloc(250 * sizeof(char)); //250만큼 동적할당
}