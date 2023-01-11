#include <stdio.h>

int hitung(char arr[][101], int x, int y){
   if (arr[x][y] == '.'){
      arr[x][y] = '#';
      return 1 + hitung(arr, x+1, y) + hitung(arr, x-1, y) + hitung(arr, x, y+1) + hitung(arr, x, y-1);
   }else if(arr[x][y] == 'S'){
      arr[x][y] = '#';
      return 0 + hitung(arr, x+1, y) + hitung(arr, x-1, y) + hitung(arr, x, y+1) + hitung(arr, x, y-1);
   }else{
        return 0;
   }
}

int main(){
    int T;
    scanf("%d", &T);getchar();
    for (int t = 0; t < T; t++){
        int a, b;
        scanf("%d %d", &a, &b);getchar();
        char arr[a+1][101];
        int posX, posY;
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                scanf("%c", &arr[i][j]);
                if (arr[i][j] == 'S'){
                    posX = i;
                    posY = j;
                }
            }
            getchar();
        }
        printf("Case #%d: %d\n", t+1, hitung(arr, posX, posY));
    }
    return 0;
}
