#include <stdio.h>
#include <math.h>
int main(){

    //apakah ini akar
    int panjang = 10;

    while ((int) sqrt(panjang) * (int) sqrt(panjang) < panjang){
        panjang++;
    }

    printf("%d", panjang);

    return 0;
}