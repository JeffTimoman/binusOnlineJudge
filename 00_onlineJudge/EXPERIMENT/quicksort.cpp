#include <stdio.h>

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    
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
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main(){
    int data[] = {1, 5, 20, 30, 60, 70, 90, 100, 200, 300, 89, 32, 65, 32};
    int n = sizeof(data) / sizeof(data[0]);
    quickSort(data, 0, n - 1);
    for (int i = 0; i < n; printf("%d ", data[i++]));
    puts("");
    return 0;
}