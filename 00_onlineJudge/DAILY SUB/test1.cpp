//https://www.hackerrank.com/challenges/connected-cell-in-a-grid/problem?isFullScreen=false
#include <stdio.h>

int arr[11][11] = {};
int posisi[11*11][3] = {};

int rekursi(int x, int y){
    if (arr[x][y] == 0) return 0;
    else if(arr[x][y] == 1){
        arr[x][y] = 0;
        return 1 + rekursi(x-1, y-1) + rekursi(x-1, y) + rekursi(x-1, y+1) + rekursi(x, y-1) + rekursi(x, y+1) + rekursi(x+1, y-1) + rekursi(x+1, y) + rekursi(x+1, y+1);
    }else{
        return 0;
    }
}

int main(){
    int a, b, counter = 0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            int x;
            scanf("%d", &x);
            if (x == 1){
                arr[i][j] = 1;
                posisi[counter][0] = i;
                posisi[counter][1] = j;
                counter++;
            }
        }
    }
    // puts("");
    // for (int i = 0; i < a; i++){
    //     for (int j = 0; j < b; j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int max = 0;
    for (int i = 0; i < counter; i++){
        int temp;
        int x = posisi[i][0];
        int y = posisi[i][1];
        temp = rekursi(x,y);
        if (temp > max) max = temp;
    }
    printf("%d\n", max);

    return 0;
}