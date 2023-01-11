#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100] = "ahha";
    char rev[100];

    int len = strlen(str);


    for (int i = 0; i < len; i++){
        rev[i] = str[len - i - 1];
        rev[i] = tolower(rev[i]);
    }
    rev[len] = '\0';

    if (strcmp(str, rev) == 0){
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}