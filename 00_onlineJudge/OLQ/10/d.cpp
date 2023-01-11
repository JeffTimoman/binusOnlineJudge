#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int arr[n+1][n+1];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Case #%d: ", t+1);
        for (int i = 0; i < n; i++){
            int total = 0;
            for (int j = 0; j < n; j++){
                total += arr[j][i];
            }
            if (i == n-1) printf("%d", total);
            else printf("%d ", total);
            total = 0;
        }
        puts("");
    }
    return 0;
}