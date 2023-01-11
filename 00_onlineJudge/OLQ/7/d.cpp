#include <stdio.h>
#include <string.h>
int main(){
    int n, cp;
    scanf("%d", &n);
    int arr[n+1] ={};
    cp = n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int a;
            scanf("%d", &a);
            arr[a]++;
            if (arr[a] == n && a != 0) cp--;
        }
    }
    printf("%d\n", cp);
    return 0;
}