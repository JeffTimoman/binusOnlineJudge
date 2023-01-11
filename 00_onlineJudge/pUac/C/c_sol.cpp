#include<stdio.h>

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
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){

        int N, A[10001] = {};
        scanf("%d", &N);
        for(int i = 0 ; i < N ; i++){
            scanf("%d", &A[i]);
        }
        mergeSort(A, 0, N - 1);
        
        long long int simpan1 = 0, simpan2 = 0;
        for(int i = N-1 ; i >= 0 ; i--){
            if(simpan1 <= simpan2){
                simpan1 += A[i];
    
            }else{
                simpan2 += A[i];
            }
        }
        
        printf("%lld", simpan1-simpan2);
    }
	return 0;
}
