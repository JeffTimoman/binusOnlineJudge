#include <stdio.h>

int main(){
    int data[6] = {}, n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        data[x-1]++;
    }

    int max = 0;
    for (int i = 0; i < 6; i++){
        if (data[i] > max) max = data[i];
    }

    for (int i = 0; i < 6; i++){
        if (data[i] == max) {
            printf("%d ", i+1); 
            break;
            }
    }
    return 0;
}