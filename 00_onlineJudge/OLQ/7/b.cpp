#include <stdio.h>
#include <string.h>
int main(){
    char vocal[6] = "aiueo";
    char nonvocal[22] = "bcdfghjklmnpqrstvwxyz";
    int a = 0, b = 0;
    char str[1000001];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        int cp = 1;
        for (int j = 0; j < 5; j++){
            if (str[i] == vocal[j]){
                a++;
                vocal[j] = '0';
                cp = 0;
                break;
            }
        }
        if (cp){
            for (int j = 0; j < 21; j++){
                if (str[i] == nonvocal[j]){
                    b++;
                    nonvocal[j] = '0';
                    break;
                }
            }
        }
    }
    printf("Vocal: %d\nConsonant: %d\n", a, b);
    return 0;
}