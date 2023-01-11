#include <stdio.h>

void printOlin(int n, int x){
    printf("Olin %d\n", n);
    if (n == x) return;
    printOlin(n-1, x);
}

int main(){
    printOlin(10, 3);
    return 0;
}