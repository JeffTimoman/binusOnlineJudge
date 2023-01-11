#include <stdio.h>
#include <string.h>

int main(){
    char s[10001];
    scanf("%[^\n]s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 32)s[i] -= 32;
    }

    char tmp1[11] = "IREASGTBPO";
    char tmp2[11] = "1234567890";

    for (int i = 0 ; i < len; i++){
        for (int j = 0; j < 10; j++){
            if (s[i] == tmp1[j])s[i] = tmp2[j];
        }
    }
    printf("%s\n", s);
    
    return 0;
}