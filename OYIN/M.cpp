#include <stdio.h>

int arr[] = {7, 4, 1, 11, 18, 13, 28, 21, 33, 26};
void printArr(int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    puts("");

}
void merge(int left, int mid, int right){
    //1. Cari panjang dari 2 buah array yang akan kita pakai
    int n1 = mid - left + 1; // + 1 karena mid masuk sini
    int n2 = right - mid;

    //2. Buat 2 buah array baru berdasarkan panjang yang sudah kita dapat.

    int L[n1], R[n2];

    //3. Tampung data berdasarkan array yang sesuai.
    for (int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++){
        R[i] = arr[mid + 1 + i]; //+1 karena midnya sudah masuk dikiri
    }

    int i = 0;
    int j = 0;
    int k = left;

    //Nimpa array yang mau ditampung
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Untuk data array yang masih tersisa dimasukkin aja satu-satu

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int left, int right){
    if (left < right){
        /*
            1. Cari nilai tengah
            bisa menggunakan (left + right) / 2, tapi gunakan
            left + (roight - left) / 2, karena (left + right) / 2
        */
       int mid = left + (right - left) / 2;

        //2. Dia bakal bagi array jadi 2
        mergeSort(left, mid);
        mergeSort(mid + 1, right);
        //3. Dicomapre dan disatukan lagi
        merge(left, mid, right);
    }   
}

int main(){
    int n = sizeof(arr) / sizeof(int);
    printArr(n);
    mergeSort(0, n-1);
    printArr(n);
    return 0;
}
