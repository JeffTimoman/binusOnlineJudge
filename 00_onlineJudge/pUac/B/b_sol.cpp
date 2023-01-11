#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n+1];
        int sum = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        sum /= k;
        int total = 0, cp = 0, i = 0;
        while (cp != k - 1){
            total += arr[i];
            if (total <= sum){
                printf("%d ", arr[i]);
            }else {
                printf("/ %d ", arr[i]);
                cp++; 
                total = arr[i];
            }
            i++;
        }

        while (i < n){
            if (i == n - 1){
                printf("%d", arr[i]);
                break;
            }
            printf("%d ", arr[i]);
            i++;
        }
    }
    return 0;
}