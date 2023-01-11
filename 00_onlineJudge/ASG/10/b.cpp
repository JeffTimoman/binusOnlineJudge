#include <stdio.h>

int rekursi(int arr[], int n){
    if (n == 0) return arr[0];
    else return arr[n] + rekursi(arr, n-1);
}

int main(){
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int arr[n+1];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        printf("Case #%d: %d\n", t+1, rekursi(arr, n-1));
    }

    return 0;
}