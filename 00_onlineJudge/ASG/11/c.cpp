#include <stdio.h>

void merge(long long int arr[], long long int l, long long int m, long long int r){
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;
    long long int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
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


void mergeSort(long long int arr[], int l, int r){
    if(l < r){
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int binarySearch(long long int arr[], int left, int right, long long int search){
    if (left <= right){
        int mid = left + (right-left)/2;
        if (arr[mid] == search) return mid;
        if (arr[mid] > search) return binarySearch(arr, left, mid-1, search);
        return binarySearch(arr, mid+1, right, search);
    }
    return -2;
}
int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n+1];
    for (int i = 0; i < n ; i++){
        scanf("%lld", &arr[i]);
    }
    mergeSort(arr, 0, n-1);
    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++){
        long long int x;
        scanf("%lld", &x);
        int pos = binarySearch(arr, 0, n-1, x);
        printf("%d\n", pos+1);
    }

    return 0;
}