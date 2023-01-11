#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // if (n % 2 == 0){
    //     printf("Bilangan genap");
    // } else {
    //     printf("Bilangan ganjil");
    // }

    if (n %2 != 0){
        printf("Bilangan ganjil");
    } else {
        printf("Bilangan genap");
    }
    return 0;
}