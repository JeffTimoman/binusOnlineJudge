#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int nn;
        scanf("%d", &nn);
        long  long int arr[nn+1];
        for (int j = 0; j < nn; j++){
            scanf("%lld", &arr[j]);
        }
        int counter = 0; 
        for (int k = 0; k < nn; k++){
            long long int x;
            scanf("%lld", &x);
            if (x != arr[k]) counter++;
        }
        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}