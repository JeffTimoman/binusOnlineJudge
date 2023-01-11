
#include <stdio.h>

//A function to do quick sort ascending
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// A function to do partitioning
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); // index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
 
            // swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
 
    // swap arr[i + 1] and arr[high] (or pivot)
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