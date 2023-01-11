#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    getchar();
    for (int t = 0; t < T; t++){
        char string[100001];
        scanf("%s", string);
        getchar();
        int len = strlen(string);
        int sum = 0;
        for (int i = 0; i < len; i++){
            sum = (sum * 10) + string[i] - '0';
            sum %= 11;
        }
        if (sum == 0) printf("Case #%d: Yeah\n", t+1);
        else printf("Case #%d: Nah\n", t+1);
    }

    return 0;
}