#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        int k;
        scanf("%d", &k);
        int arr1[n+1][n+1];
        int arr2[k*k+1];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &arr1[i][j]);
            }
        }
        for (int i = 0; i < k*k; i++){
            scanf("%d", &arr2[i]);
        }

        int size = n-k+1;
        int result[size+1][size+1] = {};
        int counter = 0;
        for (int i = 0; i < n-k+1; i++){
            for (int j = 0; j < n-k+1; j++){
                for (int l = i; l < k+i; l++){
                    for (int m = j; m < k+j; m++){
                        printf("%d%d ", l, m);
                        result[i][j] += arr1[i+k][j+l] * arr2[counter];
                        counter++;
                        if (counter == k * k - 1) counter = 0;
                        
                    }
                    
                puts("");
                }
            }
            puts("");
        }
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                printf("%d ", result[i][j]);
            }
            puts("");
        }

    }
    return 0;
}