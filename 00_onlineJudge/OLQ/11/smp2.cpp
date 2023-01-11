#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int prefix[n+2];
    prefix[0] = 0;
    for (int i = 1; i <= n;i++){
        long long int x;
        scanf("%lld", &x);
        prefix[i] = x + prefix[i - 1];
    }

    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++){
        long long int x; 
        scanf("%lld", &x);
        int max = -1;
        for (int j = 0; j < n;j++){
            for (int k = n; k >= j + 1;k--){
                if(prefix[k]-prefix[j] <= x){
                    if(k-j > max){
                        max = k - j;
                        break;
                    }else if (k-j < max)break;
                }
            }
        }
        printf("Case #%d: %d\n", i + 1, max);
    }
}