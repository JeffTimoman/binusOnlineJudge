#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int *a, int l, int r, int *count){
    int i;
    if (l == r){
        for (i = 0; i <= r; i++){
            printf("%d", a[i]);
        }
        printf("\n");
        (*count)++;
    }else{
        for (i = l; i <= r; i++){
            swap((a+l), (a+i));
            permute(a, l+1, r, count);
            swap((a+l), (a+i));
        }
    }
}

int main(){
    int arr[] = {1, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int count = 0;
    permute(arr, 0, n-1, &count);
    return 0;
}