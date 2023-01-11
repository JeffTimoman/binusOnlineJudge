#include <stdio.h>

int memo[10000];
int counter = 0;
int fibbonaci(int a, int b, int n){
    counter++;
    if (n == 2) return (a+b);
    else return fibbonaci(b, a+b, n-1);
}

int fibbonaci2(int n){
    counter++;
    if (n == 0)return 0;
    if (n == 1 || n == 2) return 1;
    if (memo[n] != -1)return memo[n];
    return memo[n] = fibbonaci2(n-1) + fibbonaci2(n-2);
}

// tabulation -> bottom up
// memoization -> top down
int main(){
    int n = 30;
    for (int i = 0; i < n+1; i++) memo[i] = -1;
    // printf("%d\n", fibbonaci2(n)); 
    printf("%d\n", fibbonaci(0, 1, n));
    printf("%d\n", counter);
}