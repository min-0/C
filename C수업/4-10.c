
#include <stdio.h>

int main()
{
	int t;
	int s;
	int m;
	int h;

	printf("��(sec)�Է� : ");
	scanf_s("%d", &t);

	s = (t % 3600) % 60;
	m = (t % 3600) / 60;
	h = t / 3600;

	printf(">> �Է��� %d�ʴ� %d�ð� %d�� %d�� �Դϴ�", t, h, m, s);

}