#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int cp = 0, counter = 0, current;
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            if (cp == 0){
                current = x;
                cp = 1;
                counter = 1;
            }
            if (x == current) counter++;
            if (x > current){
                counter = 1;
                current = x;
            }
        }
        printf("Case #%d: %d\n", t+1, counter);
    }
    return 0;
}