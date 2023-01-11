#include <stdio.h>

int main(){
    int read = 2;
    int n = 5;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - read + 1; j++){
            printf("%d%d ", j, j+read-1);
        }
        puts("");
        read++;
    }

    return 0;
}