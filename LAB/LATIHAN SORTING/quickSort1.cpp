#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; j++){
        if (arr[j] < pivot){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[right]);
    return i;
}

void quickSort(int arr[], int left, int right){
    if (left < right){
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}

int main(){
    int arr[] = {100, 27, 18, 33, 86, 55, 34, 18, 99, 327};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, n);
    quickSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}