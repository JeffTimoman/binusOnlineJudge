#include <stdio.h>
#include <string.h>

void merge(char arr[][101], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char L[n1][101], R[n2][101];
    for(int i = 0; i < n1; i++){
        strcpy(L[i], arr[left + i]);
    }
    for(int i = 0; i < n2; i++){
        strcpy(R[i], arr[mid + 1 + i]);
    }

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2){
        if(strcmp(L[i], R[j]) <= 0){
            strcpy(arr[k], L[i]);
            i++;
        }else{
            strcpy(arr[k], R[j]);
            j++;
        }
        k++;
    }

    while(i < n1){
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }

    while(j < n2){
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }
}

void mergeSort(char arr[][101], int left, int right){
    if (left < right){
        int mid = left + (right-left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int m, n;
        scanf("%d %d", &m, &n);
        char arr[m+1][101];
        for (int i = 0; i < m; i++){
            scanf("%s", arr[i]);
        }

        mergeSort(arr, 0, m-1);
        // puts("");
        printf("Case #%d: %s\n", t+1, arr[n-1]);
    }
    return 0;
}