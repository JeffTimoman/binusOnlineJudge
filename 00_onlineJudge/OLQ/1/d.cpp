#include <stdio.h>

int main(){
    int a, b;
    long long int sum = 0;
    scanf("%d %d", &a, &b);
    for (int i = a ; i <= b; i++){
        sum += i;
    }

    printf("%lld\n", sum);
    return 0;
}