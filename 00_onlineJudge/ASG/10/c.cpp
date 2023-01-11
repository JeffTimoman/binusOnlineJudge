#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    long long int arr[n+1];
    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }

    int counter = 0;
    for (int i = 0; i < n; i++){
        long long int x = arr[i];
        // printf("%d", x);
        if (x == -1) continue;
        for (int j = i+1; j < n; j++){
            if (x == arr[j]){
                arr[j] = -1;
            }
        }
        counter++;
    }

    printf("%d\n", counter);
    return 0;
}