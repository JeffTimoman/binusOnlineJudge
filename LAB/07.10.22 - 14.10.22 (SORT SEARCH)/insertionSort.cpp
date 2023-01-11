#include <stdio.h>


void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i;
        while (j > 0 && arr[j-1] > temp){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }
    
}       
// void insertionSort(int arr[], int n){
//     for (int i = 1; i < n; i++){
//         int temp = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > temp){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }
    
// }

int main(){
    int arr[] = {7, 4, 1, 11, 18, 13, 28, 21, 33, 26};
    int n = 10;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}