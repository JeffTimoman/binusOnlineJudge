#include <stdio.h>
#include <string.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char str[1001];
        scanf("%s", str);
        int len = strlen(str);
        printf("Case %d: ", i+1);
        for (int j = 0; j < len; j++){
            int x = str[j];
            if (j == len - 1)printf("%d\n", x);
            else printf("%d-", x);
        }
    }
    return 0;
}