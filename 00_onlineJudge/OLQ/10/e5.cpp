#include <stdio.h>

int rekursi(char arr[105][105], int x, int y, int a, int b){
    if (x > a || y > b || x < 0 || y < 0 || arr[x][y] == '#') return 0;
    else if (arr[x][y] == '*') {
        arr[x][y] = '#';
        return 1 + rekursi(arr, x + 1, y, a, b) + rekursi(arr, x - 1, y, a, b) + rekursi(arr, x, y + 1, a, b) + rekursi(arr, x, y - 1, a, b);
    }else {
        arr[x][y] = '#';
        return rekursi(arr, x + 1, y, a, b) + rekursi(arr, x - 1, y, a, b) + rekursi(arr, x, y + 1, a, b) + rekursi(arr, x, y - 1, a, b);
    }
}

int main(){
    int T;
    scanf("%d", &T);getchar();
    for (int t = 0; t < T; t++){
        int a, b, x, y;
        scanf("%d %d", &a, &b);getchar();
        char arr[105][105];
        
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                char t;
                scanf("%c", &t);
                arr[i][j] = t;
                if (t == 'P'){
                    x = i;
                    y = j;
                }
            }
            getchar();
        }
        // printf("%d %d %d %d\n", a, b, x, y);
        printf("Case #%d: %d\n", t + 1, rekursi(arr, x, y, a-1, b-1));
    }
    return 0;
}