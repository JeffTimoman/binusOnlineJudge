#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
       int nn;
       scanf("%d", &nn);
       long long int sums[nn+1] = {};
       for (int j = 0; j < nn; j++){
            for (int k = 0; k < nn; k++){
                long long int x;
                scanf("%lld", &x);
                sums[k] += x;
            }
       } 
        printf("Case #%d: ", i+1);
       for (int j = 0; j < nn; j++){
        if (j == nn -1) printf("%d\n", sums[j]);
        else printf("%d ", sums[j]);
       }
    }
    return 0;
}