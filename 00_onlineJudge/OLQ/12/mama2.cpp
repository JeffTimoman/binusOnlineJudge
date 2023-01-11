#include <stdio.h>

void printData(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    puts("");
}

void setCombination(int arr[], int data[], int start, int end, int index, int r){

    if (index == r){
        printData(data, r);
        return;
    }
    for (int i = start; i <= end && end-i+1 >= r-index; i++){
        data[index] = arr[i];
        setCombination(arr, data, i+1, end, index+1, r);
    }
}

void combination(int arr[], int n, int r){
    int data[r];
    setCombination(arr, data, 0, n-1, 0, r);
}

int main(){
    int arr[] = {1, 3, 5, 7};
    int n = sizeof(arr)/sizeof(int);
    // ini buat ukuran samplenya misal : 3, 4, dll;
    int r = 2;
    combination(arr, n, r);
    return 0;
}