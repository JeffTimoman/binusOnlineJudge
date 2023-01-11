#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int max, min;
    int counter_max = 0, counter_min = 0;
    for (int i = 0; i < n; i++){
        long long int x;
        scanf("%lld", &x);
        if (i == 0){
            max = x;
            min = x;
        }
        if (x > max){
            max = x;
            counter_max++;
        }

        if (x < min){
            min = x;
            counter_min++;
        }
    }
    printf("%d %d", counter_max, counter_min);
    return 0;
}