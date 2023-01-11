#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n != 0){
        int arr[n+1] = {};
        int counter = 0, k;
        for (int i = 2; i < n; i++){
            int ct = 0;
            for (int j = 2; j < i; j++){
                if (i % j == 0) {
                    ct++;
                }
            }
            if (ct == 0) {
                arr[i] = 1;
                k = i;
                counter++;
            }
        }

        counter = n - counter;
        while (counter--){
            while (arr[k] != 0){
                k++;
                if (k > n) k = 1;
            } 
            arr[k] = 1;
        }
        printf("%d\n", k);
        scanf("%d", &n);
    }
    
    return 0;
}