#include <stdio.h>

int merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)R[i] = arr[mid + i + 1];

    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = R[j];
        k++;
        j++;
    }


}

int mergeSort(int arr[], int left, int right){
    if (left < right){
        int mid = left + (right - left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
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
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}