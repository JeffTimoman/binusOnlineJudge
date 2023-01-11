#include <stdio.h>


long long int rekursi(long long int arr[], long long int prefix[], long long int search, long long int n){
    long long int max = 0, temp = 0, i = n, j = n, k = 0;
    while (i >= 0){
        if (temp == search){
            return temp;
        }else if(temp < search){
            i--;
            k++;
            temp += arr[i+1]*k;
        }else {
            k--;
            temp -= prefix[i+1] - prefix[j+1];
            j--;
        }
        if (temp > max && temp <= search){
            max = temp;
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n+2];
    for (int i = 1; i <= n; i++){
        scanf("%lld", &arr[i]);
    }
    long long int search;
    scanf("%lld", &search);
    long long int prefix[n+2] = {}, sum = 0;
    for (int i = n; i > 0; i--){
        sum += arr[i];
        prefix[i] = sum;
    }

    printf("%lld\n", rekursi(arr, prefix, search, n));
    // for (int i = 1; i <= n; i++){
    //     printf("%lld ", prefix[i]);
    // }puts("");
    // printf("%lld", sum);

    return 0;
}