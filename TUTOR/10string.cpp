#include <stdio.h>
#include <string.h>

int main(){
    /*String --> C --> array of char --> char var[panjang];

    char var[10];
    Declare :
    var --> ['\0']['\0']['\0']['\0']['\0']['\0']['\0']['\0']['\0']['\0']['\0']['\0']
    '\0' = null = 0
    Declare isi : char var[panjang] = "Rizky";

    ['R']['i']['z']..['\0']['\0']['\0']['\0']

    char    : ''
    string  : ""

    String.h

    //strlen() : menghitung panjang dari string
    //strcpy() : menduplikat isi string
    //strcat() : menggabungkan dua string
    //strcmp() : membandingkan string
    //strrev() : membalik string.

    */
/*
   //String Length strlen()
   char nama[10] = "Rizky";
   //Fungsi : menghitung berapa banyak array yang sudah terisi, berupa integer.
    // ['R']['i']['z']['k']['y']['\0']['\0']['\0']['\0']['\0']['\0']['\0']
    //   1    2    3    4    5    hitung berhenti
    int panjang = strlen(nama);//Hanya yang terisi
    printf("%d", panjang);
*/

/*
    //String Copy strcpy()
    // int x = 5;
    // int y = x;
    //Di string tidak bisa lakukan ini.

    char arr1[10] = "Rizky";
    // char arr2[10] = arr1; Error

    char arr2[11];
    //strcpy(target, source)
    //strcpy(kertas kosong, kertas dengan isi)

    strcpy(arr2, arr1);
    printf("%s", arr2);
*/

/*
    //StrCat (Menggabungkan string dengan string)
    char arr1[10]= "Rizky";
    char arr2[10] = "Febian";

    //strcat(target to add, source);
    strcat(arr1, arr2);
    printf("%s", arr1);
    //Output : RizkyFebian
*/

    //String COmpare strcmp()
    //Fungsi : membandingkan dua string, menghasilkan nilai integer.
    //Kalau sama, hasil perbandingannya adalah bilangan 0.
    //Kalau tidak sama, hasil perbandingan > 0  atau < 0;

/*
    char arr1[10] = "abba";
    char arr2[10] = "bbbb";
    //strcmp(string1, string2)
    int hasil1 = strcmp(arr1, arr2);
    //hasil1 = -1 --> tidak sama
    printf("%d", hasil1);

    printf("\n");

    char arr3[10] = "abba";
    int hasil2 = strcmp(arr1, arr3);
    //hasil2 = 0 --> sama stringnya.
    printf("%d", hasil2);
*/


    return 0;
}
