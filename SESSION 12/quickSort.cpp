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
    return i+1;
}

void quickSort(int arr[], int left, int right){
    if (right > left){
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
}

int main(){
    int arr[] = {35, 24, 6, 39, 15, 41, 37, 7, 17, 1, 48};
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");
    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}