#include <stdio.h>

int main(){
    //Nested For
    // for (int i = 1; i <= 3; i++){
    //     printf("%d ", i);
    //     for (int j = 1; j <= 3; j++){
    //         printf("%d ", i);
    //     }
    // }
    /*
    Inisiasi nilai i = 1.
    //Cek syarat for pertama, 1 <= 3, benar.
    print(nilai dari i)
        Inisiasi nilai j = 1
        //Cek syarat, 1 <= 3, benar
        //Print (nilai dari j)
        j = j + 1
        //Cek syarat, 2 <= 3, benar
        //Print (nilai dari j)
        j = j + 1
        ..
        j = 4
        //cek syarat.
    i = i + 1
    //Cek syarat for pertama, 2 <= 3, benar.
    print(nilai dari i)
        Inisiasi nilai j = 1
        //Cek syarat, 1 <= 3, benar
        //Print (nilai dari j)
        j = j + 1
        //Cek syarat, 2 <= 3, benar
        //Print (nilai dari j)
        j = j + 1
        ..
        j = 4
        //cek syarat.
    i = i + 1
    ...

    */
    for (int i = 1; i <= 3; i++){
        printf(" I : %d - J {", i);
        for (int j = 1; j <= 3; j++){
            printf("%d ", j);
        }
        printf("}");
        puts("");
    }

    return 0;
}