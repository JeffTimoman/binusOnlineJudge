#include <stdio.h>

void printArr(int (**tt)){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", tt[i][j]);
        }
        printf("\n");
    }
} 

int main(){
    int **arr;
    int counter = 0;
    int text[10] = {1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = text[counter];
            cou
        }
    }
    printArr(arr);
    return 0;
}