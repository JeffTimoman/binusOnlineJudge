#include <stdio.h>

void countSort(long long int arr[], int n, int exp)
{
    long long int output[n]; 
    long long int i, count[10] = {0};
    
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
    
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

int main(){
    int h;
    scanf("%d", &h);
    for (int s = 0; s < h; s++){
        int n;
        scanf("%d", &n);
        long long int arr[n+1] = {};
        long long int counter[n+1] = {};
        int cp = 0;
        for (int i = 0; i < n; i++){

            long long int x;
            scanf("%lld", &x);
            for (int j = 0; j < cp+1; j++){
                if (arr[j] == x){
                    counter[j]++;
                    break;
                }else if(arr[j] != x && j == cp){
                    arr[cp] = x;
                    counter[cp] = 1;
                    cp++;
                    break;
                }
            }
        }
        

        int max = 0;
        for (int i = 0; i < cp; i++){
            if (counter[i] > max) max = counter[i];
        }
        printf("%d\n", max);

        long long int result[n+1] = {};
        int counter2 = 0;
        for (int i = 0; i < cp ; i++){
            if (counter[i] == max) {
                result[counter2] = arr[i];
                counter2++;
            }
        }
        printf("Case #%d: %d\n", s+1, max);
        countSort(result, counter2, 1);
        for (int i = 0; i < counter2; i++){
            if (i == counter2-1) printf("%lld", result[i]);
            else printf("%lld ", result[i]);
        }
    }
    return 0;
}