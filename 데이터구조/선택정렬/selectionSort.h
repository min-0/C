#pragma once
void sort(int arr[], int n){
	int min, tmp;

	for (int i = 0; i < n - 1; i++){
		min = i;
		for (int k = i + 1; k < n; k++){
			if (arr[k] < arr[min]) min = k;
		}

		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
}