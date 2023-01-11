#include <stdio.h>

int main(){
    for (int i = 0; i < 3; i++){
        int n;
        char str[101];
        scanf("%d %s", &n, str);
        printf("%c%c\n", str[n-1], str[0]);

    }
    return 0;
}