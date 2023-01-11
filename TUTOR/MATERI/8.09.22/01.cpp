#include <stdio.h>

int main(){
    //Nested For Loop
    //For Loop didalam for loop
    //Cth :
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("I : %d, J :  %d\n", i, j);
        }
    }

    //Cth 2 :
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("*");
        }
        printf("\n");
    }

    //Cth 3 :
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("%d", j-i);
        }
        printf("\n");
    }

    //Result kalau printnya i : 
    /*
    00000
    11111
    22222

    printnya J : 
    01234
    01234
    01234

    printnya J + I :
    01234
    12345
    23456
    */

    


    return 0;
}