#include <stdio.h>

int main(){
    int data[] = {1,10,90,15,98,64,99,100,0, 32, -1};
    
    int n = sizeof(data)/sizeof(data[0]);
    puts("Unsorted array");
    for(int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    puts("");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    puts("Sorted array");
    for(int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    puts("");
    return 0;
}
// https://www.geeksforgeeks.org/bubble-sort/