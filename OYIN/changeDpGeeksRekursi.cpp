#include <stdio.h>

int count( int arr[], int n, int find ){
    if (find == 0) return 1;
    if (find < 0) return 0;
    if (n <=0 && find >= 1) return 0;
    return count(arr, n - 1, find ) + count(arr, n, find - arr[n-1]);
}

int main(){
    int arr[] = {2,3,4,5};
    printf("%d", count(arr, sizeof(arr)/sizeof(arr[0]), 10));
    return 0;
}
