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
    // long long int arr[] = {5, 7 ,6, 7, 10, 8 ,2 ,3 ,4 ,11, 11 ,3 ,4 ,5 ,6 ,8 ,9 ,7 ,8 ,9 ,4 ,6 ,7 ,8 ,12};
    // long long int arr[] = {3, 3, 4, 4, 2, 2, 3, 3, 3, 2, 3, 2, 3, 3, 2, 2, 2, 3, 2, 2, 3, 3, 4, 4, 3};
    long long int arr[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    long long int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    long long int counter = 0;
    long long int sum = 0;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        sum += arr[i];
        counter++;
        if (counter == 5){
            puts("");
            counter = 0;
        }
    }
    long long int min = arr[0];
    long long int min_2 = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] != min){
            min_2 = arr[i];
            break;
        }
    }
    long long int max = arr[24];
    long long int max_2 = arr[24];
    for (int i = n - 1; i >= 0; i--){
        if (arr[i] != max){
            max_2 = arr[i];
            break;
        }
    }
    // printf("%d %d", min, min_2);
    // printf("\n%d %d", max, max_2);
    min /= 2; max/=2;
    min_2 -= min; max_2 -= max;
    printf("%lld %lld", min, min_2);
    printf("\n%lld %lld", max_2, max);
    long long int last = (sum/10) - (min + min_2 + max + max_2);
    printf("\n%lld\n", last);
    long long int result[6];
    result[0] = min;
    result[1] = min_2;
    result[2] = max;
    result[3] = max_2;
    result[4] = last;
    mergeSort(result, 0, 4);
    for (int i = 0; i < 5; i++){
        printf("%lld ", result[i]);
    }
    return 0;
}