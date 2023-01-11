#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int a, b, cp = 0;
        scanf("%d %d", &a, &b);
        while (1){
            if (a == b){
                cp = 1;
                break;
            }else if (a == 1){
                break;
            }else if (a % 2 == 0){
                a /= 2;
            }else {
                a = a*3 + 1;
            }
        }
        if (cp == 1)printf("Case #%d: YES\n", t+1);
        else printf("Case #%d: NO\n", t+1);
    }
    return 0;
}