#include <stdio.h>

void rek(int arr[], int index, int n, int sum){
    if (index > n){
        return;
    }else {
        if (arr[index] != 0){
            sum += arr[index];
        }
        rek(arr, 2*index, n, sum);
        rek(arr, 2*index+1, n, sum);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[1000] = {};
    for (int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    rek(arr, 1, n, 0);
    return 0;
}