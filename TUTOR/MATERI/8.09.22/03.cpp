#include <stdio.h>
#include <string.h>

//Apa itu string?
//String adalah array of char
//Cth :

//String.h functions
//strlen() : menghitung panjang string
//strcpy() : mengcopy string
//strcat() : menggabungkan string
//strcmp() : membandingkan string


int main(){
    //String : Array of char.
    // char nama[10] = "Rizky";
    //char [R][i][z][k][y]['\0']....['\0']

    //STRLEN
    //Mengecek panjang string yang sudah diisi.
    //[R][i][z][k][y]['\0']....['\0']
    // 1  2  3  4  5

    //Strcat
    //strcat(nama, "Kurniawan");
    char nama[10] = "Rizky";
    char nama2[10] = "Kurniawan";
    char nama3[20];
    strcpy(nama3, nama);
    strcat(nama3, nama2);
    printf("%s", nama3);


    //STRCPY
    //strcpy(dest, src);
    char x[10] = "Hello!";
    char y[10];
    strcpy(y, x);
    printf("%s", y);
    return 0;
}