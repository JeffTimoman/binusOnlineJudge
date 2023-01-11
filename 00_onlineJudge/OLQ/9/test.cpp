#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char angka[10] = "OI EASGTB";
void removeAngka(char arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] >= '0' && arr[i] <= '8' && arr[i] !='2'){
            arr[i] = angka[arr[i]-'0'];
        }
    }
}


int main(){
    char x[1000]= "012345678";
                //"OIEASGTB";
    int len = strlen(x);
    removeAngka(x, len);
    // printf("%c", angka[x[2] - '0']);
    printf("\n%s", x);
    return 0;
}