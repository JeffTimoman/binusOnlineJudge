#include <stdio.h>

int main(){
    int arr[102] = {};
    int n, counter = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        arr[x]++;

        if (arr[x] % 2 == 0 && arr[x] != 0){
            arr[x] -= 2;
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}