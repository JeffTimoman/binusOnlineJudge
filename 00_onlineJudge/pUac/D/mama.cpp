#include <stdio.h>

int arr[1000001];

int main(){
    arr[1000000] = 1;
    printf("%d", arr[1000000]);
    return 0;
}