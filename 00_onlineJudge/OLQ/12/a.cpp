#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    for (int i = 1; i < n; i++){
        star = star*2 + 1;
    }
    int space = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        for (int j = 0; j < star; j++){
            printf("*");
            if (j == star - 1) continue;
            else {
            for (int j = 0; j < space; j++){
                printf(" ");
            }
            }
        }
        puts("");
        star = star / 2;
        space = space * 2 + 1;
    }
    return 0;
}
