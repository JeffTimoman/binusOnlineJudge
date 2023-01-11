#include <stdio.h>

char result[27][101][101];
int cp [27][3];
char alpha[27] = "abcdefghijklmnopqrstuvwxyz";

int rek(int indeks, int x, int y, int n){
    if (x < 0 || y < 0 || x >= n || y >= n) return 0;
    else if(result[indeks][x][y] == '#') return 0;
    else if(result[indeks][x][y] == '.'){
        result[indeks][x][y] = '#';
        return 1 + rek(indeks, x+1, y, n) + rek(indeks, x-1, y, n) + rek(indeks, x, y+1, n) + rek(indeks, x, y-1, n);
    }else if (result[indeks][x][y] == alpha[indeks]){
        result[indeks][x][y] = '#';
        return 1 + rek(indeks, x+1, y, n) + rek(indeks, x-1, y, n) + rek(indeks, x, y+1, n) + rek(indeks, x, y-1, n);
    }else {
        return 0;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    int k;
    scanf("%d", &k);
    getchar();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            char x;
            scanf("%c", &x);
            for (int l = 0; l < k; l++){
                if (alpha[l] == x){
                    cp[l][0] = i;
                    cp[l][1] = j;
                }
                result[l][i][j] = x;
            }
        }
        getchar();
    }

    for (int i = 0; i < k; i++){
        printf("%c ", alpha[i]);
        int hasil;
        hasil = rek(i, cp[i][0], cp[i][1], n);
        printf("%d", hasil);
        puts("");
    }
    return 0;
}