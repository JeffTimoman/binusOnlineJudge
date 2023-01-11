#include <stdio.h>

int binarySearch(int arr[],int left, int right, int search){
    if (left <= right && search >= arr[left] && search <= arr[right]){
        //1. Kita cari nilai index tengah dulu (mid)
        int mid = left + (right-left)/2;

        //2. Kita cek apakah nilai tengah itu sama dengan yang kita cari
            //2a kalo udah sama return aja indexnya.
        if (search == arr[mid]) return mid;
            //2b. Kalau misalkan data mid lebih kecil daripada search
            //coba binary Search lagi dari left s/d mid -1
        if (search < arr[mid]) return binarySearch(arr, left, mid-1, search);
            //2c. Kalau misalkan data mid lebih besar daripada search
            //coba binary Search lagi dari mid + 1 s/d right
        if (search > arr[mid]) return binarySearch(arr, mid+1, right, search);
    }
    return -1;

}

int main(){
    int arr[] = {1, 4, 8, 12, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search = 17 ;
    int result = binarySearch(arr, 0, n-1, search);
    if (result == -1){
        printf("Data %d tidak ditemukan", search);
    } else {
        printf("Data %d ditemukan di index ke-%d", search, result);
    }
    return 0;
}