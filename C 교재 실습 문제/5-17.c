#include <stdio.h>

int main()
{
	int n;

	printf("������ ���� ���� n�� �Է� : ");
	scanf("%d", &n);

	int sum = 0;

	
	/*for (int i = 1; i <= n; i++)
	{
		sum += i*i;
	}
	printf("1���� 10���� ������ ���� %d �Դϴ�\n", sum);*/
	


	/*int i = 1;

	while (i <= n)
	{

		sum += i * i;
		i++;
	}
	printf("%d\n", sum);
*/

	
	int i = 1;

	do
	{
		sum += i * i;
		i++;
	} while (i <= n);
		printf("%d ", sum);
	

}