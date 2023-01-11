#include <stdio.h>
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main(){
    int arr[] = {7, 4, 1, 11, 18, 13, 28, 21, 33, 26};
    int n = 10;
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}