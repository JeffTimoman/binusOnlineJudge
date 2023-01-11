#include <stdio.h>
#include <string.h>

int main(){
    char arr[11] = "1234567890";
    char arr2[11] = "ireasgtbpo";
    char str[100001];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        for (int j = 0; j < 10; j++){
            if (str[i] == arr[j]){
                str[i] = arr2[j];
                break;
            }
        }
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
    printf("%s\n", str);
    return 0;
}