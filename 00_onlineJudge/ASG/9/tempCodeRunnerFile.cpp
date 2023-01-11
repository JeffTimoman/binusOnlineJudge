#include <stdio.h>


void reccursion(char a, char b, int n){
    if (n == 0) {
        printf("%c", a);
        return;
    }else if (n == 1) {
        printf("%c", b);
        return;
    }else {
        reccursion(a, b, n-1);
        reccursion(a, b, n-2);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    getchar();
    for (int t = 0 ; t < T; t++){
        int n;
        char a, b;
        scanf("%d %c %c", &n, &a, &b);
        getchar();
        printf("Case #%d: ", t+1);
        reccursion(a, b, n);
        printf("\n");
    }
    return 0;
}