#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int arr1[n+1], arr2[n+1];
        for (int i = 0; i < n; scanf("%d", &arr1[i++]));
        for (int i = 0; i < n; scanf("%d", &arr2[i++]));

        printf("Case #%d: ", t+1);
        for (int i = 0; i < n; i++){
            if (i == n -1)printf("%d\n", arr1[i] - arr2[i]);
            else printf("%d ", arr1[i] - arr2[i]);
        }
    }
    return 0;
}