#include <stdio.h>

long long int joFibb(long long int n, long long int a, long long int b){
    if (n == 0) return a;
    else if (n == 1) return b;
    else if (n == 2)return b - a;
    else return joFibb(n-1, b, b-a);
}

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0 ; t < T; t++){
        long long int n, a, b;
        scanf("%lld %lld %lld", &n, &a, &b);
        printf("Case #%d: %lld\n", t+1, joFibb(n, a, b));
    }
    
    return 0;
}