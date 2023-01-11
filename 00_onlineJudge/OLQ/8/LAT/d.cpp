#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    printf("%lld = %lld + %lld\n", n, n/2, (n/2) + 1);
    return 0;
}