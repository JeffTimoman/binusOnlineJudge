#include <stdio.h>

void merge(long long int arr[], long long int left, long long int mid, long long int right){
    long long int n1 = mid - left + 1;
    long long int n2 = right - mid;
    long long int L[n1], R[n2];

    for (int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }

    for (int i = 0; i < n2; i++){
        R[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = left;
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

void mergeSort(long long int arr[], long long int left, long long int right){
    if (left < right){
        long long int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        long long int arr[25];
        long long int sum = 0;
        for (int i = 0; i < 25; i++){
            scanf("%lld", &arr[i]);
            sum += arr[i];
        }
        mergeSort(arr, 0, 24);
        long long int max = arr[24], max_2 = arr[24], min = arr[0], min_2 = arr[0];
        for (int i = 0; i < 25; i++){
            if (arr[i] != min){
                min_2 = arr[i];
                break;
            }
        }
        for (int i = 24; i >= 0; i--){
            if (arr[i] != max){
                max_2 = arr[i];
                break;
            }
        }
        min /= 2; max /= 2;
        min_2 -= min; max_2 -= max;
        // printf("%lld %lld\n", min, min_2);
        // printf("%lld %lld\n", max, max_2);
        long long int last = (sum/10) - (min + min_2 + max + max_2);
        // printf("%lld", last);
        long long int result[100];
        result[0] = min;
        result[1] = min_2;
        result[2] = max;
        result[3] = max_2;
        result[4] = last;
        mergeSort(result, 0, 4);
        printf("Case #%d: ", t+1);
        for (int i = 0; i < 5; i++){
            if(i == 4)printf("%lld\n", result[i]);
            else printf("%lld ", result[i]);
        }
        // puts("");
    }
    return 0;
}