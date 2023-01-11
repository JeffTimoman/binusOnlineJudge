#include <stdio.h>

void merge(int arr[], int left[], int right[], int mid, int n){
    int i = 0, j = 0, k = 0;
    while (i < mid && j < n){
        if (left[i] < right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < mid){
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int n){
    if (n < 2) return;
    int mid = n/2;
    int left[mid+1];
    int right[n-mid];
    for (int i = 0; i < mid; i++){
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++){
        right[i-mid] = arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, n-mid);
    merge(arr, left, right, mid, n-mid);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1] = {};
    int counter[n+1] = {};
    int cp = 0;
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        for (int j = 0; j < n; j++){
            // printf("%d ", arr[j]);
            if (arr[j] == x){
                counter[j]++;
                break;
            }else if(arr[j] != x && j == n-1){
                arr[cp] = x;
                counter[cp]++;
                cp++;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++){
        if (counter[i] > max) max = counter[i];
    }
    // for (int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }
    // puts("");
    // for (int i = 0; i < n; i++){
    //     printf("%d ", counter[i]);
    // }
    // puts("");
    for (int i = 0; i < n ; i++){
        if (counter[i] == max) printf("%d ", arr[i]);
    }
    return 0;
}