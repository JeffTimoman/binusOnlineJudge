#include <stdio.h>

int main(){
   int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    d -= a;
    e -= b;
    f -= c;

    if (e<0) {
        e += 60;
        d--;
    } 
    if (f < 0) {
        f += 60;
        e--;
    }
    printf("Tuan Riz Berlari selama");
    if (d > 0) printf(" %d jam", d);
    if (e > 0) printf(" %d menit", e);
    if (f > 0) printf(" %d detik", f);
    printf(".\n");
    return 0;
}
