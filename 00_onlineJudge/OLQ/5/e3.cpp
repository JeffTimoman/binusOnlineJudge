#include <stdio.h>

void countSort(int arr[], int n, int exp)
{
    int output[n]; 
    int i, count[10] = {0};
    
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
    int haha;
    scanf("%d", &haha);
    for (int ss = 0; ss < haha; ss++){
        int n;
        scanf("%d", &n);
        int arr[n+1] = {};
        int counter[n+1] = {};
        int cp = 0;
        for (int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
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

        printf("Case #%d: %d\n", ss+1, max);
        int counter2 = 0, result[n+1] = {};
        for (int i = 0; i < cp ; i++){
            if (counter[i] == max) {
                result[counter2] = arr[i];
                counter2++;
            }
        }
        countSort(result, counter2, 1);
        for(int i = 0; i < counter2; i++){
            if (i == counter2-1) printf("%d", result[i]);
            else printf("%d ", result[i]);
        }
        puts("");
    }
    
    return 0;
}