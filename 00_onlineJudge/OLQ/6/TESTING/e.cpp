#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++){
        char str[501];
        scanf("%s", str);
        getchar();
        int len = strlen(str);
        int cp = 1;
        for (int j = 0; j < len; j++){
            if (str[j] != str[len - j - 1]){
                printf("Case #%d: Nah, it\'s not a palindrome\n", i+1);
                cp = 0;
                break;
            }
            else cp = 1;
        }
        if (cp == 1)printf("Case #%d: Yay, it\'s a palindrome\n", i+1);
    }
    return 0;
}