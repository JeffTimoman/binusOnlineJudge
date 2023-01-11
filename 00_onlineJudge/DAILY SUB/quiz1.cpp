#include <stdio.h>
#include <string.h>
#include <math.h>


void remove_space(char str[])
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
}
int main(){
    char str[100];
    scanf("%[^\n]", str);
    remove_space(str);
    // printf("%s", str);
    int len = strlen(str);
    int row = floor(sqrt(len));
    int col = ceil(sqrt(len));
    if (row * col < len)row++;
    // printf("%d %d", row, col);
    char arr[row+1][col+1];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (i * col + j < len){
                arr[i][j] = str[i * col + j];
            }
            else{
                arr[i][j] = '\0';
            }
            // arr[i][j] = str[i*col + j];
        }
    }
    // puts("");
    // for (int i = 0; i < row; i++){
    //     for (int j = 0; j < col; j++){
    //         printf("%c", arr[i][j]);
    //     }
    //     puts("");
    // }
    // puts("");
    int counter = 0;
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            // if (counter == len+1) break;
            if (arr[j][i] != '\0')printf("%c", arr[j][i]);
        }
        // if (counter == len+1)break;
        printf(" ");
    }
    return 0;
}

/*
rlyzatp oxqkps quthvx fyegue qxrvdp ejinnr yfzgzf
rlyzatp oxqkps quthvx fyegue qxrvdp ejinnr yfzgzf
*/