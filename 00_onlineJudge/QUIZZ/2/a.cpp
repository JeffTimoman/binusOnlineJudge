#include <stdio.h>
#define ll long long

ll int rekursi(ll int arr[], ll int prefix[], ll int find, ll int n){
    ll int max = 0, temp = 0, i = n, j = n, k = 0;
    while (i >= 0){
        if (temp == find){
            return temp;
        }else if( temp < find){
            i--;
            k++;
            temp += arr[i+1] * k;
        }else{
            k--;
            temp -= prefix[i+1] - prefix[j+1];
            j--;
        }

        if (temp > max && temp <= find){
            max = temp;
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d", &n);
    ll int arr[n+1];
    for (int i = 1; i <= n; i++)scanf("%lld", &arr[i]);
    ll int target;
    scanf("%lld", &target);
    ll int prefix[n+2] = {}, sum = 0;
    for (int i = n; i > 0; i--){
        sum += arr[i];
        prefix[i] = sum;
    }
    printf("%lld\n", rekursi(arr, prefix, target, n));
    return 0;
}