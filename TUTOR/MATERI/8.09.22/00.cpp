#include <stdio.h>

int main(){
    //While Loop vs For Loop
    //While Loop == For Loop, 
    //Apapun yang dilakukan for loop, bisa dilakukan dengan while loop

    /*
    For loop: for(inisialisasi; kondisi; increment/decrement){
        //Sebelum kode dimulai, syarat kode berjalan, setelah kode dijalankan.
        //Increment/Decrement boleh diisi boleh tidak
        //code
    }
    
    While loop : while(kondisi){
        //code
    }
    
    For Loop :
     - Iterasi berulang yang berjalan dengan jumlah yang sudah ditentukan
     - Biasa digunakan ketika batas akhir sudah jelas
     - Looping dipakaikan ketika jumlah iterasi sudah jelas
     - Biasanya digunakan untuk mengakses array
     - Biasanya digunakan untuk mengakses string
     - Menggunakan increment/decrement
     - Syarat sudah jelas sebelum looping dimulai

    While Loop :
     - Iterasi berulang yang berjalan dengan jumlah yang belum ditentukan
     - Biasa digunakan ketika batas akhir belum jelas
     - Looping dipakaikan ketika jumlah iterasi belum jelas
     - Biasanya digunakan untuk mengakses file
     - Biasanya digunakan untuk mengakses database
     - Mengunnakan satu atau lebih kondisi, lebih cocok.

    */

   for (int i = 0; i < 10; i++){
        printf("%d", i);
   }

    int r = 0;
    while (r < 10){
        printf("%d", r);
        r++;
    }

    //Kapan menggunakan for loop, kapan menggunakan while loop?
    //Cth :

    int pin = 5657;
    int input;
    scanf("%d", &input);

    //Kalo pake for
    for (int i = 0; i < 1; /*Kosong*/){
        if (input == pin){
            printf("Pin benar");
            i++;
        } else {
            printf("Pin salah");
            scanf("%d", &input);
        }
    }

    //Kalo pake while
    while (input != pin){
        printf("Pin salah");
        scanf("%d", &input);
    }
    printf("Pin benar");

    //Enakan pake yang mana? Secara logika juga lebih mudah diterima while, karena while untuk dipake kalau lebih ke syarat.

    //Overall sih lebih bakal sering pake for daripada while, kenapa?
    //Karena for lebih mudah dipahami, lebih mudah dipelajari, lebih mudah diterima.
    //Jadinya lebih berpola, misalnya mau ngecek apakah inputan user ada di array, lebih enak pake for.
    //Kalo while lebih ke syarat, lebih ke kondisi, lebih ke logika.

    //Misal : 
    char nama[10] = "Rizky";

    //Pake for mau print nama Rizky tapi tebalik.
    for (int i = strlen(nama) - 1; i >= 0; i--){
        printf("%c", nama[i]);
    }

    //Pake while mau print nama Rizky.
    while (strlen(nama) > 0){
        printf("%c", nama[strlen(nama) - 1]);
        nama++;
    }

    return 0;
}