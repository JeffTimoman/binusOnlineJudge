#include <stdio.h>



void mergeSort(long long int arr[], long long int l, long long int r) {

}

int main(){

    long long int arr[10000] = {9, 8, 7, 6, 5, 4, 3, 2, 5, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);
    return 0;
}