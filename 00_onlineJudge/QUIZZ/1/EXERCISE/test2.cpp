#include <stdio.h>

int main(){
    int x = 99999, pembagi = 1;

    while (x / pembagi != 0){
        pembagi *= 10;
    }
    // pembagi /= 10;

    printf("%d", pembagi);

    return 0;
}