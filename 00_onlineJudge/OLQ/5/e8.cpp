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
    int haha;
    scanf("%d", &haha);
    for (int ss = 0; ss < haha; ss++){
        int n;
    scanf("%d", &n);
    int arr[n+1] = {};
    int counter[n+1] = {};
    int cp = 0;
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        for (int j = 0; j < n; j++){
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

    printf("Case #%d: %d", ss+1, max);
    puts("");
    int counter2 = 0, result[n+1] = {};
    for (int i = 0; i < n ; i++){
        if (counter[i] == max) {
            result[counter2] = arr[i];
            counter2++;
        }
    }
    mergeSort(result, counter2);
    for(int i = 0; i < counter2; i++){
        if (i == counter2-1) printf("%d", result[i]);
        else printf("%d ", result[i]);
    }
    puts("");
    }
    
    return 0;
}