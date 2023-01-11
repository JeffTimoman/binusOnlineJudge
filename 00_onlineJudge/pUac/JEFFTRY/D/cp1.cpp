#include <stdio.h>
#define ll long long
FILE *fp, *fp2;

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
    fp = fopen("testcase2.in", "r");
    fp2 = fopen("testcase_sl.out", "w");

    int T;
    fscanf(fp, "%d", &T);

    for (int t = 0; t < T; t++){
        int n, n2 = 0;
        ll find;
        fscanf(fp, "%d %lld", &n, &find);
        ll arr[n+1];
        int flag[n+1] = {0};
        for (int i = 0; i < n; i++){
            ll x;
            fscanf(fp, "%lld", &x);
            if (x >= find) continue;
            arr[n2++] = x;
        }
        n = n2;
        mergeSort(arr, 0, n-1);
        // printArr(arr, n);
        int count = 0;
        for (int i = 0; i < n; i++){
            ll x = find - arr[i];
            int index = binarySearch(arr, i+1, n-1, x);
            if (index == -1 || flag[i] == 1) continue;
            // printf("Arr[i] 0%lld : %d,Arr[index] %lld : %d\n", arr[i], flag[i], arr[index], flag[index]);
            if (flag[i] == 0 && flag[index] == 0){
                flag[i] = 1;
                flag[index] = 1;
                count++;
                // printf("%d\n", count);
            }
        }
        fprintf(fp2, "Case #%d: %d\n", t+1, count);
    }
    
    fclose(fp);
    fclose(fp2);
    return 0;
}