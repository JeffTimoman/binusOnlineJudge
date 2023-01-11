#include <stdio.h>

int rekursi(int n){
    if (n == 0 || n == 1) return 1;
    else return 1 + rekursi(n-2) + rekursi(n-1);
}



int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        printf("Case #%d: %d\n", t+1, rekursi(n));
    }
    return 0;
}