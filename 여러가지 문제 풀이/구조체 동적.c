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

	//struct userinfo info = {.name = "홍길동", .gender = "F", .age=20, .address = "김해시"}; 초기화

	//struct userinfo info[3] = { { .name = "홍길동" }, { .name = "abc" }, { .name = "qwe" } }; 배열 초기화

	struct userinfo info;
	struct userinfo A[3];

	printf("%d\n", sizeof(info)); //char 1byte int 4byte
	printf("%d\n", sizeof(A));

	struct userinfo *P;

	P = (struct userinfo*)malloc(sizeof(struct userinfo) * 100);
}
