#include <stdio.h>

int main()
{
	int n;

	printf("제곱의 합을 구할 n을 입력 : ");
	scanf("%d", &n);

	int sum = 0;

	
	/*for (int i = 1; i <= n; i++)
	{
		sum += i*i;
	}
	printf("1부터 10까지 제곱의 합은 %d 입니다\n", sum);*/
	


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