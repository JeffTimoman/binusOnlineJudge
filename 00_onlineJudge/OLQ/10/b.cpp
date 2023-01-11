#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int x = 1;
    for (int i = 0; i < n; i++){
        x *= 2;
    }
    printf("%lld\n", x-1);
    return 0;
}