#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    // printf("%d", time);
    srand(time(NULL));
    char arr[5];
    for (int i = 0; i < 3; i++){
        // printf("%d\n", rand() % 10);
        arr[1] = (rand() % 10) + '0';
        printf("%c", arr[1]);
    }
    return 0;
}