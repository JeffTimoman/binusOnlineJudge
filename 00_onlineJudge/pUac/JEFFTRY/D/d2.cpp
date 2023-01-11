#include <stdio.h>
#define ll long long

void merge(ll arr[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    ll L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = left;
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
        int mid = left+((right - left) / 2);
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++){
        ll n, f;
        scanf("%lld %lld", &n, &f);
        ll arr[n+1];
        for (int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        mergeSort(arr, 0, n-1);
        int l = 0, r = n-1, counter = 0;
        while (l < r){
            if (arr[l] + arr[r] == f){
                counter++;
                l++;
                r--;
            }else if(arr[l] + arr[r] < f){
                l++;
            }else{
                r--;
            }
        }
        printf("Case #%d: %d\n", t+1, counter);
    }
    return 0;
}