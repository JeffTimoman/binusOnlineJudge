#include <stdio.h>



int rekursi(int arr[], int n, int x, int k){
    if (x > n || k == 0) return 0;
    return arr[x] * k + rekursi(arr, n, x+1, k-1);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+2];
    for (int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    int max;
    scanf("%d", &max);
    int start = 1, gap=99999999, cp = 0, k = 1;
    while (start <= n){
        int result = rekursi(arr, n, start, k);
        // printf("%d\n", gap); 
        if (start == n && k > 1) break;
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
    printf("%d\n", cp);

    return 0;
}