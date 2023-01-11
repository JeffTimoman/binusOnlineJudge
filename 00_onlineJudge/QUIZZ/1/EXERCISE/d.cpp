#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    int max_sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        max_sum += arr[i];
    }
    if (max_sum %2 == 0){
        printf("%d", max_sum);
    }else{
        int temp = 0;
        for (int i=0; i<n; i++){
            if ((max_sum - arr[i]) % 2 == 0 && max_sum - arr[i] > temp){
                temp = max_sum - arr[i];
            }
        }
        printf("%d", temp);
    }
    return 0;
}