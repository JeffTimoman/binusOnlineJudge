#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b) printf("Case #%d: Go-Jo\n", i + 1);
        else printf("Case #%d: Bi-Pay\n", i + 1);
    }
    return 0;
}