#include <stdio.h>

int main(){
    //Ada namanya break untuk looping
    //Cth :
    for (int i = 0; i < 10; i++){
        if (i == 5){
            break;
        }
        printf("%d", i);
    }


    //Ada namanya continue untuk skip looping yang sedang dijalankan, tapi tidak di hentikan secara permanen.
    //Cth 2 :
    for (int i = 0; i < 10; i++){
        if (i == 5){
            continue;
        }
        printf("%d", i);
    }

    return 0;
}