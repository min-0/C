
#include <stdio.h>

int main()
{
	int t;
	int s;
	int m;
	int h;

	printf("초(sec)입력 : ");
	scanf_s("%d", &t);

	s = (t % 3600) % 60;
	m = (t % 3600) / 60;
	h = t / 3600;

	printf(">> 입력한 %d초는 %d시간 %d분 %d초 입니다", t, h, m, s);

}