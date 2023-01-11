#include <stdio.h>

int main(){
    int p, n, z;
    int x;
    scanf("%d", &x);
    int i;
    for (i = 0; i < x; i++){
        int a;
        scanf("%d", &a);
        if (a > 0) p++;
        else if (a < 0) n++;
        else z++;
    }

    printf("%.6f\n%.6f\n%.6f\n", (float)(p / x)*1.0, (float)(n/x)*1.0, (float)(z / x)*1.0);
    return 0;
}