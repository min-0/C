#include <stdio.h>

int main()
{
	int n;

	printf("�¾ �ظ� �Է��ϼ���\n");

	scanf_s("%d", &n);

	switch (n % 12)
	{
	case 0: printf("����� �����̶��Դϴ�\n");
		break;
	case 1: printf("����� �߶��Դϴ�\n");
		break;
	case 2: printf("����� �����Դϴ�\n");
		break;
	case 3: printf("������\n");
		break;
	case 4: printf("���\n");
		break;
	case 5: printf("�Ҷ�\n");
		break;
	case 6: printf("����\n");
		break;
	case 7: printf("�䳢��\n");
		break;
	case 8: printf("���\n");
		break;
	case 9: printf("���\n");
		break;
	case 10: printf("����\n");
		break;
	case 11: printf("���\n");
		break;
	default: printf("����⵵�� �ٽ� �Է����ּ���.\n");
	}

	return 0;
}