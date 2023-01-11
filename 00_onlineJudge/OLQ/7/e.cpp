#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char str[1001];
        char cp[1001];
        scanf("%s", str);
        getchar();
        int len = strlen(str);
        int result[len+1] = {};
        char vocal[6] = "AEIOU";
        char key[6][10] = {
            {"ABCD"},  {"EFGH"},  {"IJKLMN"}, {"OPQRST"}, {"UVWXYZ"}
        };
        printf("Case #%d:\n", i+1);
        for (int j = 0; j < len; j++){
            for (int k = 0; k < 5; k++){
                int len2 = strlen(key[k]);
                for (int l = 0; l < len2; l++){
                    if (str[j] == key[k][l]){
                        int sum = key[k][l] - vocal[k];
                        if (sum < 0) {
                            printf("%c", vocal[k]);
                            sum *= -1;
                        }else{
                            printf("%c", vocal[k]);
                        }
                        result[j] = sum;
                        break;
                    }
                }
            }
        }
        puts("");
        for (int j = 0; j < len; j++){
            printf("%d", result[j]);
        }
        puts("");


    }
    return 0;
}