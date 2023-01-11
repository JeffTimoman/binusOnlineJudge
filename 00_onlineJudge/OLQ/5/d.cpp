#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        long long int arr[2001];
        long long int sum = 0;
        for(int j = 0; j < a ; j++){
            long long int x;
            scanf("%lld", &x);
            arr[j] = x;
            sum += x;
        }
        int counter = 0;
        for (int j = 0; j < a; j++){
            if (arr[j] > sum) counter++;
            // printf("%lld ", arr[j]);
        }
        // printf("%lld\n", sum);
        printf("Case #%d: %lld\n%d\n", i+1, sum, counter);
    }
    return 0;
}