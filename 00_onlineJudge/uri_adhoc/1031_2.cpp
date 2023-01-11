#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n != 0){
        int m = 1;
        int cp = 1;
        while (cp == 1){
            int k = 1;
            int arr[n+2] = {};
            arr[k] = 1;
            // printf("%d : 1 ", m);
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
                // printf("%d ", k);
            }
            // puts(""); 
            if (k == 13) {
                cp = 0;
                printf("%d\n", m);
            }
            else {
                m++;
            }
        }
        scanf("%d", &n);
    }
 
    return 0;
}