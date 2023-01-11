#include <stdio.h>
int counter = 0;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    counter++;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if(!(flag)) break;
    }
}
int main(){
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++){
        int n, m;
        scanf("%d %d", &n, &m);
        counter = 0;
        // scanf("%d %d", &n, &m);
        int arr[n+1];

        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        bubbleSort(arr, n);
        printf("Case #%d: %d\n", t, counter*m);
    }
    return 0;
}