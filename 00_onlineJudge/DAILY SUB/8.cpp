#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while (T--){
        int k;
        scanf("%d", &k);
        int n;
        scanf("%d", &n);
        int arr[n+1];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (i == j) continue;
                if (arr[i] + arr[j] == k) printf("%d %d\n", i+1, j+1);
            }
        }
    }
    return 0;
}