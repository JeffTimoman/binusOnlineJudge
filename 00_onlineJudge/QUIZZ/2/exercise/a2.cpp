#include <stdio.h>

long long int rekursi(long long int arr[], long long int n, long long int x, long long int k){
    if (x > n || k == 0) return 0;
    return arr[x] * k + rekursi(arr, n, x+1, k-1);
}

int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n+2];
    for (int i = 1; i <= n; i++){
        scanf("%lld", &arr[i]);
    }
    long long int max;
    scanf("%lld", &max);
    long long int start = 1, gap=999999999999999999, cp = 0, k = 1;
    while (start <= n){
        long long int result = rekursi(arr, n, start, k);
        // printf("%d\n", gap); 
        if (gap == 0) break;
            
        if (result > max || k > n){
            start++;
            k = 1;
        }else{
            if (max - result < gap){
                gap = max - result;
                cp = result;
            }
            k++;
        }
    }
    printf("%lld\n", cp);

    return 0;
}