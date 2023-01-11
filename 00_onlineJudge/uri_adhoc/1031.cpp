#include <stdio.h>

int main(){
    int m = 5;
    int n;
    scanf("%d", &n);
    while (n != 0){
        int arr[n+2] = {};
        int k = 1;
        arr[k] = 1;
        // printf("%d ", 1);
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < m; j++){
                k += 1;
                k > n ? k %= n : k = k;
                if (k == 0) k = 1;
                while (arr[k] != 0){
                    k += 1;
                    k > n ? k %= n : k = k;
                    if (k == 0) k = 1;
                }
            }
            arr[k] = 1;
            printf("%d ", k);
        }
        scanf("%d", &n);
    }
    //6,11,16,5,12,2,9,17,10,4,15,14,3,8,13,7.
    
    return 0;
}