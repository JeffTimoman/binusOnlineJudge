#include <stdio.h>

int counter = 0;
int interPolationSearch(int arr[], int left, int right, int search)
{
    counter++;
    puts("Jalan");
    if (left <= right)
    {
        // 1. Cari pivot dari interpolationnya.
        // 2. Rumus :
        //  left + ((right - left) / (arr[right] - arr[left])) * (search - arr[left])
        int pivot = left +
                    ((right - left) * (search - arr[left]) /
                     (arr[right] - arr[left]));
        // int pivot = left +  ((right - left) / (arr[right] - arr[left])) * (search - arr[left]);
        printf("Pivot: %d", pivot);
        printf("Jalan Ke Sini\n");
        if (search == arr[pivot])
            return pivot;
        if (search < arr[pivot])
        {
            return interPolationSearch(arr, left, pivot - 1, search);
        }
        printf("Jalan Ke Kanan\n");
        return interPolationSearch(arr, pivot + 1, right, search);
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr1) / sizeof(int);
    int search = 17;
    int result = interPolationSearch(arr1, 0, n - 1, search);
    printf("%d", result);
    if (result == -1)
    {
        printf("Data %d tidak ditemukan", search);
    }
    else
    {
        printf("Data %d ditemukan di index ke-%d", search, result);
    }
    printf("\n%d\n", arr1[8]);
    return 0;
}