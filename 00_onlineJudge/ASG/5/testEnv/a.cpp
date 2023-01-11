#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int s;
    scanf("%d", &s);
    for (int i = 0; i < s; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a-1] = b;
        printf("Case #%d: ", i+1);
        for (int i = 0; i < n; i++){
            if (i == n-1) printf("%d\n", arr[i]);
            else printf("%d ", arr[i]);
        }
    }

    return 0;
}