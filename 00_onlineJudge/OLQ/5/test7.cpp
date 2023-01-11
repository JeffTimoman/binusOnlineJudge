#include <stdio.h>
#include <string.h>

int main(){
    char s[101] = "aaabbbcccddbd ABCDEF";

    char result[101];
    result[0] = s[0];
    int counter = 1;
    for (int i = 1; i < strlen(s)+1; i++){
        if (s[i] != s[i-1]){
            result[counter] = s[i];
            counter++;
        }
    }
    printf("%s", result);
    return 0;
}