#include <stdio.h>

int main(){
    char x[101];
    scanf("%[^\n]", x);
    printf("Happy Birthday to %s.\n", x);
    return 0;
}