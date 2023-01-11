#include <stdio.h>

int fibonnaci(int r){
    if (r == 0) return 0;
    if (r == 1) return 1;
    return fibonnaci(r - 1) + fibonnaci(r - 2);
}

int main(){
    int a = 0, b = 1, n;
    scanf("%d", &n);
    if (n == 1) printf("The 1-th fibbonaci number is 0");
    else if(n == 2) printf("The 2-th fibbonaci number is 1");
    else {
        for (int i = 0; i < n-1; i++){
            int temp = a;
            a = b;
            b = temp + b;
        }
        printf("The %d-th fibbonaci number is %d \n", n, b);
    }
    printf("The %d-th fibbonaci number is %d \n", n, fibonnaci(n));
    // 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987
    return 0;
}