#include <stdio.h>

int main()
{
	int m;
	int b;

	printf("월 입력: ");
	scanf("%d", &m);

	switch (m)
	{
	case 1: b = 1;
		break;
	case 2: b = 1;
		break;
	case 3: b = 1;
		break;
	case 4: b = 2;
		break;
	case 5: b = 2;
		break;
	case 6: b = 2;
		break;
	case 7: b = 3;
		break;
	case 8: b = 3;
		break;
	case 9: b = 3;
		break;
	case 10: b = 4;
		break;
	case 11: b = 4;
		break;
	case 12: b = 4;
		break;
	}
	printf("%d사분기 입니다.", b);
}