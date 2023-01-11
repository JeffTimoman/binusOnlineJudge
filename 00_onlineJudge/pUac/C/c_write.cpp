#include <stdio.h>

FILE *fp, *fp2;

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
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
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    fp = fopen("testdata.in", "r");
    fp2 = fopen("testdata.out", "w");

    int T;
    fscanf(fp, "%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        fscanf(fp, "%d", &n);
        int arr[n+1];
        for(int i = 0 ; i < n ; i++){
            fscanf(fp, "%d", &arr[i]);
        }
        mergeSort(arr, 0, n - 1);

        long long int total1 = 0, total2 = 0;
        for (int i = n-1; i >= 0; i--){
            if (total1 <= total2){
                total1 += arr[i];
            }else{
                total2 += arr[i];
            }
        }
        fprintf(fp2, "%lld\n", total1 > total2 ? total1 - total2 : total2 - total1);
    }
    fclose(fp);
    fclose(fp2);
    return 0;

}