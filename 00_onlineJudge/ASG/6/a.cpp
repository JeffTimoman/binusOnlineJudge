#include <stdio.h>

int main(){
    for (int i = 0; i < 3; i++){
        int n;
        char arr[101];
        scanf("%d %s", &n, arr);
        printf("%c%c\n", arr[n-1], arr[0]);
    }
    return 0;
}