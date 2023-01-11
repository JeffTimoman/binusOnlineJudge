#include <stdio.h>


int main(){ 

    for (int i = 0; i < 3; i++) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        double result = 0;
        result += (a/1.0) * 2.0;
        result += (b/2.0) * 4.0;
        result += (c/3.0) * 6.0;
        result += (d/4.0) * 4.0;
        printf("%.2lf\n", result);
    }

    return 0;
}