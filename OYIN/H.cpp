#include <stdio.h>

void printArr(int arr[], int n){
	for (int i = 0; i < n ; i++){
		arr[i] += 1;
	}
}

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	printArr(arr, 5);
	for (int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	puts("");
	return 0;
}
