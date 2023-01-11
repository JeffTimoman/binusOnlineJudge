#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n ; i++){
        int p, largest, secondLargest;
        scanf("%d", &p);
        int arr[p+1];
        for (int j = 0; j < p; j++){
            scanf("%d", &arr[j]);
        }

        largest = arr[0];
        secondLargest = arr[1];
        if (largest < secondLargest){
            int x = largest;
            largest = secondLargest;
            secondLargest = x;
        }
        for (int i = 2; i < p; i++){
            if (arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] != largest){
                secondLargest = arr[i];
            }
        }
        
        printf("Case #%d: %d\n", i+1, largest + secondLargest);
    }
    return 0;
}