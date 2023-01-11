#include <stdio.h>

int main(){
    for (int i = 0; i < 3; i++){
        int a, b;
        scanf("%d + %d =", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}