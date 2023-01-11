#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int result[x+1][y+1] = {};
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            scanf("%d", &result[i][j]);
        }
    }
    int s;
    scanf("%d", &s);

    for (int i = 0; i < s; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        result[a-1][b-1] = c;
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (j != y-1) printf("%d ", result[i][j]);
            else printf("%d", result[i][j]);
            // printf("%d ", result[i][j]);
        }
        puts("");
    }
    return 0;
}