#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x+2][y+2];

    for (int a = 0; a < x; a++){
        for (int b = 0; b < y; b++){
            scanf("%d", &arr[a][b]);
        }
    }
    int c;
    scanf("%d", &c);

    for (int a = 0; a < c; a++){
        int p, q, r;
        scanf("%d %d %d", &p, &q, &r);
        arr[p-1][q-1] = r;
    }

    for (int a = 0; a < x; a++){
        for (int b = 0; b < y; b++){
            if (b == y - 1){
                printf("%d\n", arr[a][b]);
            } else {
                printf("%d ", arr[a][b]);
            }
        }
    }
    return 0;
}