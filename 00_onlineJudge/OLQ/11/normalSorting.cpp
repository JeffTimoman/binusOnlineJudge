#include <stdio.h>

void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
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
        j++;
        k++;
    }
}

// A function to do merge sort
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

int main(){
    int arr[] = {3, 3, 4, 4, 2, 2, 3, 3, 3, 2, 3, 2, 3, 3, 2, 2, 2, 3, 2, 2, 3, 3, 4, 4, 3};
    // int arr[] = {2, 3, 4, 5, 6, 3, 4, 5, 6, 7, 4, 5, 6, 7, 8, 5, 6, 7, 8, 9, 6, 7, 8, 9, 10};
    // int arr[] = {5, 7 ,6, 7, 10, 8 ,2 ,3 ,4 ,11, 11 ,3 ,4 ,5 ,6 ,8 ,9 ,7 ,8 ,9 ,4 ,6 ,7 ,8 ,12}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    int cnt = 0;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        cnt++;
        if (cnt == 5){
            printf("\n");
            cnt = 0;
        }
    }
    return 0;
}