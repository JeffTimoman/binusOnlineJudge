#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        char input[1000001], input2[1000001];
        scanf("%s %s", input, input2);
        getchar();
        int len = strlen(input);
        int len2 = strlen(input2); 

        int len3 = len > len2 ? len : len2;
        printf("Case #%d: ", t+1);
        if (len > len2){
            for (int i = 0; i < len - len2; i++){
                input2[len2 + i] = '0';
            }
            input2[len] = '\0';

            for (int i = 0; i < len/2; i++){
                char temp = input2[i];
                input2[i] = input2[len - i - 1];
                input2[len - i - 1] = temp;
            }
        }
        else if (len < len2){

            for (int i = 0; i < len2 - len; i++){
                input[len + i] = '0';
            }
            input[len2] = '\0';

            for (int i = 0; i < len2/2; i++){
                char temp = input[i];
                input[i] = input[len2 - i - 1];
                input[len2 - i - 1] = temp;
            }
        }
        int cp = 0;
        int counter = 0;
        for (int i = 0; i < len3; i++){
            int temp = ((input[i] - '0') + (input2[i] - '0'))%10;
            if (temp == 0 && cp == 0){
                counter++;
            }else{
                cp = 1;
                printf("%d", temp);
            }
            // printf("%d", temp);
        }
        if (counter == len3){
            printf("0");
        }
        puts("");
        // printf("%s %s\n", input, input2);
    }
    
    return 0;
}