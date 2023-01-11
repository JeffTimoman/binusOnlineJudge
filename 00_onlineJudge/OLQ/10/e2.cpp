#include <stdio.h>

char arr[101][101];

int rekursi(int x, int y, int a, int b){
    if (arr[x][y] == '*'){
        arr[x][y] = '#';
        return 1 + rekursi(x + 1, y, a, b) + rekursi(x - 1, y, a, b) + rekursi(x, y + 1, a, b) + rekursi(x, y - 1, a, b);
    }else if(arr[x][y] == '.' || arr[x][y] == 'P'){
        arr[x][y] = '#';
        return rekursi(x + 1, y, a, b) + rekursi(x - 1, y, a, b) + rekursi(x, y + 1, a, b) + rekursi(x, y - 1, a, b);
    }else if (x > a || y > b || x < 0 || y < 0 || arr[x][y] == '#'){
        return 0;
    }else {
        return 0;
    }
}

int main(){
    int T;
    scanf("%d", &T);getchar();
    for (int t = 0; t < T; t++){
        int a, b;
        scanf("%d %d", &a, &b);getchar();
        int location[3];
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                scanf("%c", &arr[i][j]);
                if (arr[i][j] == 'P'){
                    location[0] = i;
                    location[1] = j;
                }
            }
            getchar();
        }
        // puts("");
        printf("Case #%d: %d\n", t + 1, rekursi(location[0], location[1], a, b));

        // for (int i = 0; i < a; i++){
        //     for (int j = 0; j < b; j++){
        //         printf("%c", arr[i][j]);
        //     }
        //     puts("");
        // }
    }
    return 0;
}

/*
2
5 5
#####
#P..#
###.#
#*.*#
#####
5 5
#####
#P#*#
#####
#*.*#
#####
*/
