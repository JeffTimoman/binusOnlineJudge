#include <stdio.h>
int rekursi(int a, int b){
    if (a == b){
        return 1;
    }else if (a == 1){
        return 0;
    }else if (a % 2 == 0){
        return rekursi(a/2, b);
    }else {
        return rekursi(a*3 + 1, b);
    }
}   

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int a, b;
        scanf("%d %d", &a, &b);
        int hasil = rekursi(a, b);
        if (hasil == 1)printf("Case #%d: YES\n", t+1);
        else printf("Case #%d: NO\n", t+1);
    }
    return 0;
}