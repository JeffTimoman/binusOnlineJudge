#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char str[1001];
        scanf("%s", str);
        getchar();
        printf("Case #%d : %s\n", i+1, strrev(str));
    }
    return 0;
}