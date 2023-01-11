#include <stdio.h>

int rekursif(char **arr){
    if (arr[0][0] == 1) return 0;
}

int main(){
    char v[100][100];
    for (int i = 0 ; i < 100; i++){
        for (int j = 0; j < 100; j++){
            v[i][j] = i+j;
        }
    }
    return 0;
}