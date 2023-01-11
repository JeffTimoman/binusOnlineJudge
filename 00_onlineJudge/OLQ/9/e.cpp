#include <stdio.h>


void rekursi(int arr[], int index, int sum){
    if (arr[index] == 0) return;
    else {
        sum += arr[index];
        if (arr[index*2] == NULL && arr[index*2+1] == NULL) {
            printf("%d\n", sum);
        }
        else {
            rekursi(arr, index*2, sum);
            rekursi(arr, index*2+1, sum);
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int arr[1000] = {};
        for (int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
        }
        printf("Case #%d:\n", t+1);
        rekursi(arr, 1, 0);
    }
    return 0;
}