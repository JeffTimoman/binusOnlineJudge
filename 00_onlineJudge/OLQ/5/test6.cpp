#include <stdio.h>

//A function to do quick sort
void quicksort(int arr[], int low, int high)
{
    int i = low, j = high;
    int tmp;
    int pivot = arr[(low + high) / 2];
    
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    
    if (low < j)
        quicksort(arr, low, j);
    if (i < high)
        quicksort(arr, i, high);
}

int main(){
    int arr[] = {1, 2, 5, 10, 12, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");
    return 0;
}