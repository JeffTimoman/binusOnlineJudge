#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];

    for (int i=0; i<n1; ++i)
        L[i] = arr[l + i];
    for (int j=0; j<n2; ++j)
        R[j] = arr[m + 1+ j];
 
    int i = 0, j = 0;
 
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 

        merge(arr, l, m, r);
    }
}

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
        int o;
        scanf("%d", &o);
        int arr[o+1] = {};
        for (int j = 0; j < o; j++){
            int x;
            scanf("%d", &x);
            arr[j] = x;
        }

        quicksort(arr, 0, o-1);
        for (int j = 0; j < o; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    return 0;
}