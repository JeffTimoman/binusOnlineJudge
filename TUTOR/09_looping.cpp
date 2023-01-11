#include <stdio.h>

int main(){
    //Pemberhentian looping secara paksa.
    //break, continue.

    //Break : menghentingkan looping secara menyeluruh
    for (int i = 1; i <= 5; i++){
        if (i == 3){
            break;
        }
        printf("%d ", i);
    }

    // I = 1
    //Cek syarat, memenuhi
    //print (I)
    //I += 1
    //cek syarat, memenuhi
    //
    // i = 3
    //cek syarat loop, memenuhi
    //cek syara didalam, tidak memenuhi --> break.
    puts("");
    //Continue : menghentikan looping untuk sekali itu doang, tapi ga permanen.
    //Skip 1 x looping.
    for (int i = 1; i <= 5; i++){
        if (i == 3){
            continue;
            //Dibawah ini tidak akan dijalankan satu kali.
        }
        printf("%d ", i);
    }
    //1 2 4 5
    return 0;
}