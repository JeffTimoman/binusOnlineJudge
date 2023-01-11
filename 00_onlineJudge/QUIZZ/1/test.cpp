#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        double arr[n+1][n+1];
        int k;
        scanf("%d", &k);
        double result[k+1] = {};

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%lf", &arr[i][j]);
            }
        }
        int cp = 0, nm = 0;
        for (int i = 0; i < n-k+1; i++){
            for (int j = 0; j < n-k+1; j++){
                for (int l = 0; l < k; l++){
                    for (int m = 0; m < k; m++){
                        result[cp] += arr[i+l][j+m];
                        nm++;
                        if (nm == k*k){
                            nm = 0;
                            cp++;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < cp; i++){
            if (i == k * k - 1)printf("%.2lf ", result[i]/(k * k));
            else printf("%.2lf ", result[i]/(k * k));
        }
    }
    return 0;
}