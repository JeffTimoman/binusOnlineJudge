#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int r;
        scanf("%d", &r);
        int arr[n+2] = {};
        int k = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < r; j++){
                k++;
                k > n ? k %= n : k;
                if (k == 0) k = 1;
                while(arr[k] != 0){
                    k++;
                    k > n ? k %= n : k;
                    if (k == 0) k = 1;
                }
            }
            arr[k] = 1;
            
        }
        printf("Case %d: %d\n",t+1, k);
    }
    
    return 0;
}