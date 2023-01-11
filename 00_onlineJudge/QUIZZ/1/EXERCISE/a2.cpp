#include <stdio.h>

int main(){
    int arr1[10];
    int arr2[10];
    int result[10];
    int a, b;
    scanf("%d %d", &a, &b);

    int pembagi = 1000000;
    int counter = 0;
    while (pembagi >= 1){
        arr1[counter] = a/pembagi;
        arr2[counter] = b/pembagi;
        a = a%pembagi;
        b = b%pembagi;
        counter++;
        pembagi /= 10;
    }
    for (int i = 0; i < 7; i++){
        result[i] = (arr1[i] + arr2[i])%10;
    }
    int cp = 0;
    int ctm = 0;
    for (int i = 0; i < 7; i++){
       if (result[i] == 0 && cp == 0){
           ctm++;
           continue;
       }else{
            cp = 1;
            printf("%d", result[i]);
            continue;
       }
    }
    if (ctm == 7){
        printf("0");
    }
    puts("");


    return 0;
}