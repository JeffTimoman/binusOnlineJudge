#include <stdio.h>

int main(){
    //C : While, For, Do While
    // int n;
    // scanf("%d", &n);
    //User --> masukin nilai lebih dari 10

    /*while (kondisi){
        //code
    }
    */

    /*for(inisiasi; kondisi; increment/decrement){
        (inisiasi; syarat loop masih berjalan; setelah codingan selesai)
        //code
    }
    */
//    for (int i = 1;i <= 10; i++){
//         printf("%d", i);
//    }
//    puts("");
//    int x = 1;
//    while (x <= 10){
//     printf("%d", x);
//     x++;
//    }

    int pin = 1234;
    int input;
    scanf("%d", &input);

    // while (input != pin){
    //     printf("Nilai inputtan salah, masukkan lagi : ");
    //     scanf("%d", &input);
    // }

    for (int i = 0; i< 1 && i > -10; ){
        if (input != pin){
            printf("Nilai inputtan salah, masukkan lagi : ");
            scanf("%d", &input);
        }else{
            i++;
        }
    }

    //beecrowd

    //For loop
    /*
    - Batasan yang jelas (loopingnya 10 kali)
    - Mengakses array
    array --> kumpulan dari variable/data
    int data= 1.
    int arr[panjang_data] = {data1, data2, .., dataN}
    Mengakses:
        //Data 1 : arr[0]
        //Data 2 : arr[1]
        ..
        //Data n : arr[n-1]
    - Syarat : 1
    */

   //While Loop
   /*
    - Batasan looping belom jelas (belum tau mau berapa kali)
    - Satu atau lebih kondisi/syarat
   */
    return 0;
}