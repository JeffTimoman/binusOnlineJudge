#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n*2-1; i++){
        int cp = n;
        for (int j = 0; j < n*2-1; j++){
            if (i <= n - 1){
                if (j <= i){
                    cp = n - j;
                } else if(i + j >= n*2-2){
                    cp++;
                }else {
                    cp = cp;
                }
            }else {
                if (j <= n*2-2 - i){
                    cp++;
                } else if(i + j >= n*2-2){
                    cp = n - j;
                }else {
                    cp = cp;
                }
            }
        }
        printf("%d ", cp);
        puts("");
    }
    return 0;
}
/*

11 12 13 14 15 16 17 
21 22 23 24 25 26 27
31 32 33 34 35 36 37
41 42 43 44 45 46 47
51 52 53 54 55 56 57
61 62 63 64 65 66 67
71 72 73 74 75 76 77


if (j < n-1){
                printf("%d ", arr[j]);
            }else {
                printf("%d ", arr[n*2-2-j]);
            }

*/  