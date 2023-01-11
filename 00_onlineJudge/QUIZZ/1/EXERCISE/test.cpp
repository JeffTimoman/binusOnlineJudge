#include <stdio.h>

int main(){
    printf("%d", (('9' - '0') + '9' - '0')%10);
    return 0;
}