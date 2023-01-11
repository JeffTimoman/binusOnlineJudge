#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    char str[201];
    scanf("%s", str);
    for (int i = 0; i < b; i++){
        int x;
        scanf("%d", &x);
        if (str[x] >= 'a' && str[x] <= 'z'){
            str[x] -= 32;
        }else{
            str[x] += 32;
        }
    }
    printf("%s\n", str);
    return 0;
}