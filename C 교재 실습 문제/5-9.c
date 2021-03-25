#include <stdio.h>

int main()
{
	int n;

	printf("태어난 해를 입력하세요\n");

	scanf_s("%d", &n);

	switch (n % 12)
	{
	case 0: printf("당신은 원숭이띠입니다\n");
		break;
	case 1: printf("당신은 닭띠입니다\n");
		break;
	case 2: printf("당신은 개띠입니다\n");
		break;
	case 3: printf("돼지띠\n");
		break;
	case 4: printf("쥐띠\n");
		break;
	case 5: printf("소띠\n");
		break;
	case 6: printf("범띠\n");
		break;
	case 7: printf("토끼띠\n");
		break;
	case 8: printf("용띠\n");
		break;
	case 9: printf("뱀띠\n");
		break;
	case 10: printf("말띠\n");
		break;
	case 11: printf("양띠\n");
		break;
	default: printf("출생년도를 다시 입력해주세요.\n");
	}

	return 0;
}