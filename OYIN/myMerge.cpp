#include <stdio.h>

void merge(int arr[], int left, int mid, int right){
	int n1 = mid - left +1, n2 = right - mid;
	int L[n1], R[n2];
	for (int i = 0; i < n1; i++){
		L[i] = arr[i+left];
	}
	
	for (int i = 0; i < n2; i++){
		R[i] = arr[mid+i+1];
	}
	
	int i = 0, j = 0, k = left;
	
	while (i < n1 && j < n1){
		if (L[i] < R[j]){
			arr[k++] = L[i++];
		}else {
			arr[k++] = R[j++];
		}
	}
	
	while (i < n1){
		arr[k++] = L[i++];
	}
	while (j < n2){
		arr[k++] = R[j++];
	}
}

void mergeSort(int arr[], int left, int right){
	if (left < right){
		int mid = left + (right-left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main(){
	int arr[] = {7, 9, 21, 20, 13, 8, 3, 2, 1};
	int n = sizeof(arr)/sizeof(int);
	mergeSort(arr, 0, n-1);
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
