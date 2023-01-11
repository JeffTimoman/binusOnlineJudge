#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        int k;
        scanf("%d", &k);
        int hasil = n - k + 1;
        float sum[hasil+1][hasil+1] = {};
        float input[n+1][n+1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%f", &input[i][j]);
            }
        }
        for (int i = 0; i < hasil; i++){
            for (int j = 0; j < hasil; j++){
                for (int l = 0; l < k; l++){
                    for (int m = 0; m < k; m++){
                        sum[i][j] += input[i+l][j+m];
                    }
                }
                sum[i][j] /= k*k*1.0;
            }
        }
        for(int i = 0; i < hasil; i++){
            for(int j = 0; j < hasil; j++){
                if (j == hasil - 1)printf("%.2f\n", sum[i][j]);
                else printf("%.2f ", sum[i][j]);
            }
        }
    }
    puts("");
    return 0;
}