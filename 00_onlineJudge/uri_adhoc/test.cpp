#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    int read = 1, counter = 0;

    //Looping utama bakal ngeloop berapa kali sih program ini, untuk ngecek string degnan panjang 2 3 4 5 6 7 8 .. strlen.
    for (int i = 0; i < len-1; i++){

        //Looping j untuk program bakal ngelooping sampai ketemu indeks strlen - 1.
        for (int j = 0; j <= len - 1 - read; j++){
            int kiri = j, kanan = read+j;
            // printf("%d%d | ", j, read + j);
            while (kiri <= kanan){
                if (str[kiri] != str[kanan]){
                    break;
                }
                kiri++;
                kanan--;
            }
            if (kiri > kanan){
                counter++;
            }
        }
        // puts("");
        //nambah ukuran string yang dicek, awalnya  0 -> 1 berarti 2, 0 -> 2 berarti 3, 0 -> 3 berarti 4, dst.
        read++;
    }
    //Ini buat ngecek jumlah huruf single yang unique.
    int cp = 0;
    char alfabet[27] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; i++){
        for (int j = 0; j < 26; j++){
            if (str[i] == alfabet[j]){
                cp++;
                counter++;
                alfabet[j] = '.';
                //buang alfabet yang mau bisa dibaca.
                break;
            }
        }
        //kalo udah 26 kali cek, abc..z udah semua ke cek ngapain looping lg.
        if (cp == 26) break;
    }
    printf("%d\n", counter);
    return 0;
}