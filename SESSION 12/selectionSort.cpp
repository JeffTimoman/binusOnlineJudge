#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int x = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[x]){
                x = j;
            }
        }
        swap(&arr[i], &arr[x]);
    }
}

int main(){
    int arr[] = {35, 24, 6, 39, 15, 41, 37, 7, 17, 1, 48};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}