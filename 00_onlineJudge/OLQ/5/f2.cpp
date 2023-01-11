
#include <stdio.h>

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); 
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++; 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
 
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
 
    return i + 1;
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int o;
        scanf("%d", &o);
        int arr[o+1];
        for (int j = 0; j < o; j++){
            int x;
            scanf("%d", &x);
            arr[j] = x;
        }

        quickSort(arr, 0, o-1);
        printf("Case #%d: %d", i+1, arr[o-1]+arr[o-2]);
        printf("\n");
    }
    return 0;
}