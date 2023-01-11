#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    char str[201];
    scanf("%s", str);
    char tp1[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char tp2[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < b; i++){
        int x;
        scanf("%d", &x);
        for (int j = 0; j < 53; j++){
            if (str[x] == tp1[j]){
                str[x] = tp2[j];
                break;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}