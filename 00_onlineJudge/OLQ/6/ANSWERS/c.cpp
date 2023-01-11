#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char str[1001];
        scanf("%s", str);
        printf("Case #%d : ", i+1);
        for (int j = strlen(str) - 1; j >= 0; j--){
            if (j == 0) printf("%c\n", str[j]);
            else printf("%c", str[j]);
}
    }
    return 0;
}