#include <stdio.h>

int main(){
    for (int i = 0; i < 2; i++){
        char name[101];
        double a;
        int b;
        scanf("%s %lf %d", name, &a, &b);
        printf("Name %d: %s\nHeight %d: %.2lf\nAge %d: %d\n", i+1, name, i+1, a, i+1, b);
    }

    return 0;
}