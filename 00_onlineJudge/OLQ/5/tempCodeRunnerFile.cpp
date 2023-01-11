#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int arr[n+1] = {};
    int result[n+1] = {};
    for (int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        int x; 
        scanf("%d", &x);
        result[arr[i]] = x;
    }
    for(int i = 0; i < n;i ++){
        if (i == n-1) printf("%d", result[i]);
        else printf("%d ", result[i]);
    }
    puts("");
    return 0;
}