#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int j = i;
        while (j > 0 && arr[j] < arr[j-1]){
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
} 

int main(){
    int arr[] = {35, 24, 6, 39, 15, 41, 37, 7, 17, 1, 48};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}