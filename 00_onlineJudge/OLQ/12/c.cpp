#include <stdio.h>

int rekursi(int m, int n){
    if (m == 0) return 1;
    if (n == 0) return 1;
    return rekursi(m-1, n-1) + rekursi(m-1, n) + rekursi(m, n-1);
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", rekursi(m, n));
    return 0;
}