#include <stdio.h>
int find_char(int arr[], int posit)
{
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == posit)
		{
			return 1;
		}
	}
	return -1;
}
int main()
{
	int arr[7] = { 4, 66, 9, 82, 25, 2, 10 };

	int posit = 3;

	int find = find_char(arr, posit);
	printf("%d\n", find);
}