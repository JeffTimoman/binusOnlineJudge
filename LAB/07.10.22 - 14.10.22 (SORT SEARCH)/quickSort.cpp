#include <stdio.h>

//Quick Sort
/*
- Melakukan sort berdasarkan posisi dari pivot.
- Meletakkan angka yang lebih kecil dari pivot di kiri dan yang lebih besar di kanan.
*/ 

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right){
    /*
        1. Ambil pivot
        (reccomend : ambil index terakhir)
        ex : 7 4 1 11 18 13 28 21 33 26 (pivot = 26)
    */
   int pivot = arr[right];
   int i = left - 1;

   /*
        2. Looping dari array sekarang (left - right)
   */
    for (int j = left; j < right; j++){
        /*
            2a. Kalau misalkan data di iterasi kita sekarang lebih kecil dari pivot, kita tuker.
            Yang dituker adalah index dari count kita.
        */
       if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
       }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void quickSort(int arr[], int left, int right){
    //dia ngelakuin logic quicksort terus
    //menghasilkan index dari si pivot
    if (left < right){
        int p = partition(arr, left, right);
        quickSort(arr, left, p-1);
        quickSort(arr, p+1, right);
    }

}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");

}

int main(){
    int arr[]  = {7, 4, 1, 11, 18, 13, 28, 21, 33, 26};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr, n);
    quickSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}