#include <stdio.h>



int main(){
    int angka;
    int *ptr1 = &angka;
    int **ptr2 = &ptr1;

    printf("%d %d", ptr1, ptr2);
    return 0;
}