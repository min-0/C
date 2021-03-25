#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct student
{
	char name[10];
	int num;
	int age;
	char address[10];
};
void ArrangeByCity(struct student *Aclass, int size)
{
	char **AArray; // 학생 문자열 정보를 담을 배열(제일 큰 통)
	int cnt = 0; // 담긴 통의 크기를 확인할 변수
	for (int i = 0; i < size; i++) //학생 정보를 모두 훑는다
	{
		int exist = 0; // 존재여부 판단을 위한 변수
		if (cnt == 0) // 맨 처음 돌 때 cnt는 0이므로 바로 if로 들어감
		{
			AArray = (char**)malloc(sizeof(char*)* ++cnt); // 제일 큰 통 크기 할당
			AArray[0] = (char*)malloc(sizeof(char) * 10); // 큰 통 안에 문자열 크기 할당
			strcpy(AArray[0], Aclass[i].address); // 첫번째 자리에 도시 주소값을 넣는다
		}
		else // 두번째 돌 때는 여기로 넘어옴
		{
			for (int k = 0; k < cnt; k++) //모두 확인
			{
				if (strcmp(AArray[k], Aclass[i].address) == 0)
				{
					exist++; // 문자열 비교를 통해 같으면 존재 변수값 증가
				}

			}
			if (exist == 0) // 존재하지 않을 때 배열에 넣어줘야 함
			{
				char **tmparr = (char**)malloc(sizeof(char*)*cnt); //새 공간에 미리 복사해두기
				for (int k = 0; k < cnt; k++) 
				{
					tmparr[k] = (char*)malloc(sizeof(char) * 10);
					strcpy(tmparr[k], AArray[k]);
				}

				AArray = (char**)malloc(sizeof(char*)*++cnt); //넣을 통 크기 확장
				for (int j = 0; j < cnt; j++) //원래 항목 새 통에 옮기기
				{
					AArray[j] = (char*)malloc(sizeof(char) * 10);
					if (j != cnt - 1) // 마지막 자리 놔두고 복사해둔 거 통에 복사
						strcpy(AArray[j], tmparr[j]);
				}
				strcpy(AArray[cnt - 1], Aclass[i].address); // 원래 주소 값 통에 넣기 
			}
		}
	}
	for (int i = 0; i < cnt; i++) //출력
	{
		printf("%s\n", AArray[i]);
	}
}

void Citylist(struct student *Aclass, int size)
{
	int cnt = 1;

	struct student **infoarr;

	infoarr = (char**)malloc(sizeof(char*)*cnt);

	for (int index = 0; index < size; index++)
	{
		if (index == 0)
		{
			infoarr[0] = (struct student*)malloc(sizeof(struct student));

			strcpy(infoarr[0][0].name, Aclass[0].name);
			infoarr[0][0].num = Aclass[0].num;
			infoarr[0][0].age = Aclass[0].age;
			strcpy(infoarr[0][0].address, Aclass[0].address);
		}
		else
		{
			int existindex = -1;
			for (int i = 0; i < cnt; i++)
			{
				if (strcmp(Aclass[existindex].address, infoarr[existindex][i].address) == 0)
				{
					existindex = i;
					break;
				}
			}

			if (existindex > -1)
			{
				int tmpcnt = (sizeof(infoarr[existindex]) / sizeof(struct student));
				struct student *tmpstudent = (struct student*)malloc(sizeof(struct student)*tmpcnt);
				for (int i = 0; i < tmpcnt; i++)
				{

				}
			}
		}
	}
}

int main()
{
	struct student Aclass[5] = {
		{ .name = "김길동", .num = 2010123, .age = 20, .address = "부산시" },
		{ .name = "남인수", .num = 2011134, .age = 19, .address = "울산시" },
		{ .name = "박수영", .num = 2009235, .age = 21, .address = "부산시" },
		{ .name = "박수홍", .num = 2010234, .age = 21, .address = "부산시" },
		{ .name = "서길웅", .num = 2006525, .age = 24, .address = "창원시" }
	};

	ArrangeByCity(Aclass, sizeof(Aclass)/sizeof(struct student));
}