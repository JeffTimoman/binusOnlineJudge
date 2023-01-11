#include <stdio.h>
#include <string.h>
int main(){
    for (int i = 0; i < 2; i++){
        char a[35], b[35], c[35];
        scanf("%s %s %s", a, b, c);
        strcat(a, "szs");
        strcat(b, "szs");
        strcat(c, "szs");
        printf("%s %s %s\n", a, b, c);
    }
    return 0;
}