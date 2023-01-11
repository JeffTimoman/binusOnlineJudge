//2nd Swap

#include <stdio.h>
#include <string.h>
int main(){
    int n; 
    scanf("%d", &n);
    getchar();
    for (int o = 0; o < n; o++){
        char s[101];
        scanf("%[^\n]s", s);
        getchar();
        printf("Case #%d:\n", o+1);
        if (s[strlen(s) - 1] == ' '){
            s[strlen(s) - 1] = '\0';
        }
        char temp[100];
        int counter = 0;
        for (int i = 0; i < 101; i++){
            if (s[i] == '\0'){
                if (counter == 1 || counter == 2){
                    for (int j = 0; j < counter; j++){
                        printf("%c", temp[j]);
                    }
                }else if (counter > 2){
                    printf("%c", temp[0]);
                    for (int j = counter-2; j > 0; j--){
                        printf("%c", temp[j]);
                    }
                    printf("%c", temp[counter-1]);
                }
                break;
            }else if(s[i] == ' '){
                if (counter == 1 || counter == 2){
                    for (int j = 0; j < counter; j++){
                        printf("%c", temp[j]);
                    }
                }else if (counter > 2){
                    printf("%c", temp[0]);
                    for (int j = counter-2; j > 0; j--){
                        printf("%c", temp[j]);
                    }
                    printf("%c", temp[counter-1]);
                }
                counter = 0;
                temp[100] = {};
                printf(" ");
            } else {
                temp[counter] = s[i];
                // for (int j = 0; j < counter + 1; j++){
                //     printf("%c", temp[j]);
                // }
                // puts("");
                counter++;
            }
        }
        printf("\n");
    }
    
    
    return 0;
}