#include <stdio.h>
void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int arr[] = {7, 4, 1, 11, 18, 13, 28, 21, 33, 26};
    int n = 10;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}