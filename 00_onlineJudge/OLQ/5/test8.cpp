#include <stdio.h>
#include <string.h>

int main(){
    char s[101] = "nama saya michello rayhan";
    char temp[101];
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == ' '){
           temp[i] = s[i];
        }
    }

    for (int i = strlen(s); i >= 0; i--){
        if (temp[strlen(s) - i] == ' '){
            printf(" ");
        }
        else {
            while(s[i] == ' '){
                i--;
            }
            printf("%c", s[i]); 
        }

    }
    return 0;
}