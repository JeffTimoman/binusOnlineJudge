#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while (T--){
        int n;
        scanf("%d", &n);
        int k;
        scanf("%d", &k);
        int input1[n+1][n+1];
        int input2[k+1][k+1];
        //Input yang size matrix besar n * n;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &input1[i][j]);
            }
        }
        //INput yang size matrix kecil k * k;
        for (int i = 0; i < k; i++){
            for (int j = 0; j < k; j++){
                scanf("%d", &input2[i][j]);
            }
        }
        long long int result[n-k+2][n-k+2] = {};
        //Proses perhitungan matrixnya.
        for (int i = 0; i < n-k+1; i++){
            for (int j = 0; j < n-k+1; j++){
                for (int x = 0; x < k; x++){
                    for (int y = 0; y < k; y++){
                        result[i][j] += input1[i+x][j+y] * input2[x][y];
                    }
                }
                printf("%lld ", result[i][j]);
            }
            puts("");
        }
        //Print hasil hitung matrix.
        // for (int i = 0; i < n-k+1; i++){
        //     for (int j = 0; j < n-k+1; j++){
        //         printf("%lld ", result[i][j]);
        //     }
        //     puts("");
        // }
    }
    return 0;
}