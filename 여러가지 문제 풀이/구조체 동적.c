#include <stdio.h>
#include <malloc.h>

int main()
{
	struct userinfo
	{
		char name[7];
		char gender;
		int age;
		char address[100];
	};

	//struct userinfo info = {.name = "ȫ�浿", .gender = "F", .age=20, .address = "���ؽ�"}; �ʱ�ȭ

	//struct userinfo info[3] = { { .name = "ȫ�浿" }, { .name = "abc" }, { .name = "qwe" } }; �迭 �ʱ�ȭ

	struct userinfo info;
	struct userinfo A[3];

	printf("%d\n", sizeof(info)); //char 1byte int 4byte
	printf("%d\n", sizeof(A));

	struct userinfo *P;

	P = (struct userinfo*)malloc(sizeof(struct userinfo) * 100);
}
