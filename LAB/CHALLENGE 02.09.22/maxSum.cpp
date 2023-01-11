#include <stdio.h>

int main(){
    long long int x;
    long long int arr[6];
    long long int max, min;

    for (int i = 0; i < 5; scanf("%lld", &arr[i++]));
    int counter = 0;
    for (int  i = 0; i < 5; i++){
        long long int sum = 0;
        for (int j = 0; j < 5; j++){
            if (i != j){
                sum += arr[j];
            }
        }
        if (counter == 0){
                max = sum;
                min = sum;
                counter++;
            }

        if (sum > max){
           max = sum;
        }
        if (sum < min){
            min = sum;
        }
    }
    printf("%lld %lld", min, max);
    return 0;
}