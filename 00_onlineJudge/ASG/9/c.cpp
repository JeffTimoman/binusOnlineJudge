#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int arr[10005]={};
        int max_number = 0;
        for (int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            arr[x]++;
            if (x>max_number)max_number = x;
        }
        printf("Case #%d: %d\n", t+1, arr[max_number]);
    }
    return 0;
}