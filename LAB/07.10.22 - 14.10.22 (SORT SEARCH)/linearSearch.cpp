#include <stdio.h>

/*  
    - Linear Search
        -> Gerak dari kiri kekanan, ketemu, return
    - Binary Search
        -> Gerak dari tengah ke kiri atau kanan, ketemu, return
    - Interpolation Search
        -> Gerak dari tengah ke kiri atau kanan, ketemu, return
*/

int linearSearch(int arr[], int n, int search){
    for (int i = 0; i < n; i++){
        if (arr[i] == search) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1, 4, 8, 12, 15, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search = 12;
    int result = linearSearch(arr, n, search);
    if (result == -1){
        printf("Data %d tidak ditemukan", search);
    } else {
        printf("Data %d ditemukan di index ke-%d", search, result);
    }
    return 0;
}