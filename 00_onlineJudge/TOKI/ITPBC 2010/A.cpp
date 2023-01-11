#include <stdio.h>

int rekursi(){
    if 
    
}

int main(){
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    for (int i = 0; i < c; i++){
        long long int temp = a;
        for (int j = 0; j < b-1; j++){
            a *= temp;
        }
        a %= d;
    }
    printf("%lld", a+1);
    return 0;
}