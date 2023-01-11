#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    int min = 0;
    int cm = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (cm == 0){
            min = arr[i];
            cm = 1;
        }
        if (arr[i] < min && arr[i] > 0) min = arr[i];
    }
    int run = 1;
    while (run){
        int counter = 0, cp = 0, cmp;
        for (int i = 0; i < n; i++){
            if (arr[i] == 0) continue;
            
            arr[i] -= min;
            counter++;
            if (arr[i] > 0 && cp == 0){
                cp = 1;
                cmp = arr[i];
            }
            if (arr[i] < cmp && arr[i] > 0)cmp = arr[i];
        }
        min = cmp;
        printf("%d\n", counter);
        if (counter == 1) run = 0;
    }
    return 0;
}