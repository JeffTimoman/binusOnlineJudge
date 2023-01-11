#include <stdio.h>


void coba(int x, int counter){
    if (x == 0) return;
    else if(counter == 5){
        printf("*\n", x);
        coba(x-1, 1);
    }
    else {
        printf("*", counter);
        coba(x, counter+1);
    }
}

int main(){
    // for (int i = 0; i < 5; i++){
    //     for (int j = 0; j < 5; j++){
    //         printf("*");
    //     }
    //     puts("");
    // }
    coba(5, 1);
    return 0;
}

/*
#####
#####
#####
#####
#####
*/