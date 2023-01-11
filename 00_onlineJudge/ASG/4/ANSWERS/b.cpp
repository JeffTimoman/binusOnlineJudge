#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x;
        long long int result = 0; 
        scanf("%d", &x);
        for (int j = 0; j < x; j++){
            long long int z = 0; 
            scanf("%lld", &z);
            result += z;
        }
        printf("Case #%d: %lld\n", i+1, result);
    }
    return 0;
}