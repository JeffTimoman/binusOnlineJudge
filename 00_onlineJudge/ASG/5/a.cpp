#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int result[n+1] = {};
    for(int i = 0; i < n; i++){
        scanf("%d", &result[i]);
    }
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        int b, c;
        scanf("%d %d", &b, &c);
        result[b-1] = c;
        printf("Case #%d: ", i+1);
        for(int j = 0; j < n; j++){
            if (j == n-1) printf("%d", result[j]);
            else printf("%d ", result[j]);
        }
        puts("");
    }
    return 0;
}