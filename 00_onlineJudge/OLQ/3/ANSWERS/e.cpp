#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", (a/b) << b);
    }
    return 0;
}