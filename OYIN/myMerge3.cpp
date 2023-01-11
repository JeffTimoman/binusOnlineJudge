#include <stdio.h>
#include <string.h>

void merge(char arr[][20], int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	char L[n1][20], R[n2][20];
	for (int i = 0; i < n1; i++){
		strcpy(L[i], arr[left+i]);
	}
	
	for (int i = 0; i < n2; i++){
		strcpy(R[i], arr[mid+i+1]);
	}
	
	int i = 0, j = 0, k = left;
	
	while (i < n1 && j < n2){
		if (strcmp(L[i], R[j]) < 0){
			strcpy(arr[k++], L[i++]);
		}else{
			strcpy(arr[k++], R[j++]);
		}
	}
	
	while (i < n1){
		strcpy(arr[k++], L[i++]);
	}
	
	while (j < n2){
		strcpy(arr[k++], R[j++]);
	}
}

void mergeSort(char arr[][20], int left, int right){
	if (left < right){
		int mid = left + (right-left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main(){
	char str[][20] = {"caroline", "jeff", "ruth", "michello",
		"valina", "alin", "peter", "michelle"};
	int n = sizeof(str)/(sizeof(char) * 20);
	mergeSort(str, 0, n-1);
	for (int i = 0; i < n; i++){
		printf("| %s ", str[i]);
	}printf("|");
	return 0;
}
