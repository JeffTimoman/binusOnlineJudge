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
    int arr[5] = {1, 5, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int exp = 1;
    countSort(arr, n, exp);
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}