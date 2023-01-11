#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int n, m, s, ans;
        scanf("%d %d %d", &n, &m, &s);
        ans = (s+m-1)%n;
        if (ans == 0) ans = n;
        printf("%d\n", ans);
    }
   
   return 0;
}