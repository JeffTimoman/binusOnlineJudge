#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *arr;
    int data;
    arr = (int*) malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++){
    //     scanf("%d", &data);
    //     arr[i] = data;
    // }
    arr[0] = 30;
    n = 10;
    printf("%d\n", arr[0]);
    arr = (int*) calloc(5*sizeof(int), 5*4);
    // printf("%d", sizeof(*arr));
    printf("%d", arr[0]);
    return 0;
}