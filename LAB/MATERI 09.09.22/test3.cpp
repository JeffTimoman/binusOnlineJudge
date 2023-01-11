#include <stdio.h>
#include <string.h>

int main(){
    char x[1000] = "Hello World";
    for (int i = 0; i < strlen(x); i++){
        printf("%c", x[i]);
    }
    printf("%s", x);


    return 0;
}