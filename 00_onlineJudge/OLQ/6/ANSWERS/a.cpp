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
        for (int j = len - 1; j >= 0; j--){
            int x = str[j];
            if (j == 0)printf("%d\n", x%2);
            else printf("%d", x%2);
        }
    }
    return 0;
}