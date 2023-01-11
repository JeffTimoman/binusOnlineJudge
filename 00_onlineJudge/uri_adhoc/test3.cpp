#include <stdio.h>
#include <string.h>

int fibbonaci(int a, int b, int n){
    if (n == 2) return a + b;
    else return fibbonaci(b, a+b, n-1);
}

//fibbonaci(0, 1, 5)
//fibbonaci(1, 1, 4)
//fibbonaci(1, 2, 3)
//fibbonaci(2, 3, 2)d



int fibbonaci2(int n){
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    else return fibbonaci2(n-1) + fibbonaci2(n-2);
}
//fibbonaci (5)
//fibbonaci (4) + fibbonaci (3)
//fibbonaci (3) + fibbonaci (2) + fibbonaci (2) + fibbonaci (1)
//fibbonaci (2) + fibbonaci (1) + fibbonaci (1) + fibbonaci (0) + fibbonaci (1) + fibbonaci (0)
//fibbonaci (1) + fibbonaci (0) + fibbonaci (0) + fibbonaci (1) + fibbonaci (0) + fibbonaci (1) + fibbonaci (0)


int main(){
    int n;
    scanf("%d", &n);
    printf("Fibbonaci No-%d : %d\n",n, fibbonaci(0, 1, n));
    // printf("Fibbonaci No-%d : %d",n, fibbonaci2(n));
    return 0;
}