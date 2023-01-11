#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int a, b;
    fscanf(fp, "%d %d", &a, &b);

    printf("%d\n", a+b);
    fclose(fp);
    return 0;
}