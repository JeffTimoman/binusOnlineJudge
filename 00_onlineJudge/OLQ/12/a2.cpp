#include <stdio.h>
int rekursif(){

}
int main(){
    int n;
    scanf("%d", &n);
    int result = 1, star = 1;
    for (int i = 1; i < n; i++){
        result = result*2 + 1;
        star = star*2 + 1;
    }
    // printf("%d", result);
    for (int i = 0 ; i < result; i++){
        printf("*");
    }
    puts("");
    int space = 1; 
    result = result /2  - 1;
    for (int i = n; i > 1; i--){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        for (int j = 0; j <= result; j++){
            printf("*");
            if (j == result) continue;
            else {
            for (int j = 0; j < space; j++){
                printf(" ");
            }
            }
        }
        puts("");
        result = result /2  - 1;
        space = space*2 + 1;
    }
    return 0;
}