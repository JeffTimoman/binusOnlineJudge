#include <stdio.h>

int hitungFibb(int n){
    if (n == 0)return 1;
    else if(n==1) return 1;
    else return 1 + hitungFibb(n-1) + hitungFibb(n-2);
}

int counter = 0;
void hitungFibb2(int n){
    if (n == 0){
        counter++;
    }else if(n==1){
        counter++;
    }else {
        counter++;
        hitungFibb2(n-1);
        hitungFibb2(n-2);
    }
}
int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        // printf("Case #%d: %d\n", t+1, hitungFibb(n));
        hitungFibb2(n);
        printf("Case #%d: %d\n", t+1, counter);
        counter = 0;
    }
    return 0;
}