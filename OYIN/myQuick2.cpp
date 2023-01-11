#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int left, int right){
	int pivot = arr[right];
	int i = left - 1;
	for (int j = left; j < right; j++){
		if (arr[j] < pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[right]);
	return i + 1;
}

void quickSort(int arr[], int left, int right){
	if (left < right){
		int pivot = partition(arr, left, right);
		quickSort(arr, left, pivot-1);
		quickSort(arr, pivot+1, right);
	}
}

int main(){
	int arr[] = {1, 9, 6, 5, 3, 4, 12, 3, 7, 60, 120, 221, 222};
	int n = sizeof(arr)/sizeof(int);
	quickSort(arr, 0, n-1);
	
	for (int i =0 ; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
