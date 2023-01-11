#include <stdio.h>
#define ll long long int

void merge(ll arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    ll L[n1], R[n2];
    for (int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }

    for (int i = 0; i < n2; i++){
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
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
void mergeSort(ll arr[], int left, int right){
    if (left < right){
        int mid = left + (right-left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
void printArr(ll arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%lld ", arr[i]);
    }
    printf("\n");
}
int binarySearch(ll arr[], int left, int right, ll x){
    if (left <= right){
        int mid = left + (right-left)/2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] > x) return binarySearch(arr, left, mid-1, x);
        else return binarySearch(arr, mid+1, right, x);
    }
    return -1;
}

int main(){

    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++){
        int n;
        ll find;
        scanf("%d %lld", &n, &find);
        ll arr[n+1];
        int flag[n+1] = {};
        for (int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }

        mergeSort(arr, 0, n-1);
        // printArr(arr, n);

        int count = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] >= find) {
                flag[i] = 1;
                continue;
            }
            ll temp = find - arr[i];
            if (temp <= 0) continue;

            int index = binarySearch(arr, i+1, n-1, temp);
            if (index == -1 || flag[index] == 1 || flag[i] == 1) continue;

            flag[i] = 1;
            flag[index] = 1;
            count++;
        }
        printf("Case #%d: %d\n", t+1, count);
    }
    return 0;
}