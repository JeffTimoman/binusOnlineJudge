#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (!(swapped))break;
    }
}

int main(){
    int arr[] = {35, 24, 6, 39, 15, 41, 37, 7, 17, 1, 48};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}