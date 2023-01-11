#include <stdio.h>

int rekursi(int a, int b, int n){
    if (n == 0) return a;
    else if (n == 1) return b;
    else if (n == 2)return a+b;
    else return rekursi(b, a+b, n-1);
}

int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    printf("%d\n", rekursi(a, b, n));
    return 0;
}