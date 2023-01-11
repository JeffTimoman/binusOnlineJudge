#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);getchar();
    for (int t = 0; t < T; t++){
        int h, m;
        char q, r;
        scanf("%d:%d %c%c", &h, &m, &q, &r);getchar();
        if (q == 'p'){
            if (h != 12) h += 12;
        }else{
            if (h == 12) h = 0;
        }
        printf("Case #%d: %02d:%02d\n",t+1, h, m);
    }
    return 0;
}