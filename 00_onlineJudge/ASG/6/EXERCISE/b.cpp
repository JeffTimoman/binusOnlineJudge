#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char str[1001];
        scanf("%s", str);
        printf("Case #%d: ", i+1);
        for (int j = strlen(str) - 1; j >= 0; j--){
            if (str[j] >= 'a' && str[j] <= 'z') printf("%c", str[j] - 32);
            else printf("%c", str[j] +32);
        }
        puts("");
    }
    return 0;
}