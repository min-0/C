#include <stdio.h>

int main()
{
	int n;

	printf("�¾ �ظ� �Է��ϼ��� : ");
	scanf("%d", &n);

	switch (n%12)
	{
	case 0: printf("����� �����̶��Դϴ�.\n");
		break;
	case 1: printf("����� �߶��Դϴ�.\n");
		break;
	case 2: printf("����� �����Դϴ�.\n");
		break;
	case 3: printf("����� �������Դϴ�.\n");
		break;
	case 4: printf("����� ����Դϴ�.\n");
		break;
	case 5: printf("����� �Ҷ��Դϴ�.\n");
		break;
	case 6: printf("����� �����Դϴ�.\n");
		break;
	case 7: printf("����� �䳢���Դϴ�.\n");
		break;
	case 8: printf("����� ����Դϴ�.\n");
		break;
	case 9: printf("����� ����Դϴ�.\n");
		break;
	case 10: printf("����� �����Դϴ�.\n");
		break;
	case 11: printf("����� ����Դϴ�.\n");
		break;
	default: printf("����⵵�� �ٽ� �Է��ϼ���");
	}
}