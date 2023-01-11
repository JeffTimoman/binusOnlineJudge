#include <stdio.h>

void bSort(int arr[], int p){
    for (int i = 0; i < p; i++){
        for (int j = 0; j < p-1; j++){
            if (arr[j] < arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n ; i++){
        int p;
        scanf("%d", &p);
        int arr[p+1];
        for (int j = 0; j < p; j++){
            scanf("%d", &arr[j]);
        }
        bSort(arr, p);
        printf("Case #%d: %d\n", i+1, arr[0] + arr[1]);
    }
    return 0;
}