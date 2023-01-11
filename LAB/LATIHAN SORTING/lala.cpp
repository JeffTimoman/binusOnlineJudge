#include <stdio.h>

int fpb(int x, int y){
    if (y == 0) return x;
    else return fpb(y, x%y);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int arr1[a+1], arr2[b+1], kpk1 = 1, fpb2, hasil;
    for(int i = 0; i < a; i++){
        scanf("%d", &arr1[i]);
    }
    for(int j = 0; j < b; j++){
        scanf("%d", &arr2[j]);
    }
    for(int i = 0; i < a; i++){
        kpk1 = (kpk1 * arr1[i])/fpb(kpk1, arr1[i]);
    }
    printf("%d\n", kpk1);
    if (b == 1){
        fpb2 = arr2[0];
    }else {
        fpb2 = fpb(arr2[0], arr2[1]);
        for (int j = 2; j < b; j++){
            fpb2 = fpb(fpb2, arr2[j]);
        } 
    }
    printf("%d", fpb2);
    return 0;
}












