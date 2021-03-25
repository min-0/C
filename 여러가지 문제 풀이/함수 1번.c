#include <stdio.h>
int min_find(int arr[])
{
	int temp = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (temp > arr[i])
		{
			temp = arr[i];
		}
	}
	return temp;
}


int main()
{
	int arr[5] = { 5, 77, 23, 3, 44 };

	int temp = min_find(arr);
	printf("minnum : %d\n", temp);
}