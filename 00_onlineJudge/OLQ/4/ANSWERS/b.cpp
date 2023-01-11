
#include <stdio.h>

int main(){
    int daging, sayur, telur;
    scanf("%d %d %d", &daging, &sayur, &telur);

    if (daging > telur && daging > sayur){
        printf("Daging\n");
        if (telur > sayur){
            printf("Telur\n");
            printf("Sayur\n");
        }else {
            printf("Sayur\n");
            printf("Telur\n");
        }
    }else if (telur > daging && telur > sayur){
        printf("Telur\n");
        if (daging > sayur){
            printf("Daging\n");
            printf("Sayur\n");
        }else {
            printf("Sayur\n");
            printf("Daging\n");
        }
    }else {
        printf("Sayur\n");
        if (daging > telur){
            printf("Daging\n");
            printf("Telur\n");
        }else {
            printf("Telur\n");
            printf("Daging\n");
        }
    }
    return 0;
}