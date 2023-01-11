#include <stdio.h>

int main(){
    int s; 
    scanf("%d", &s);
    for(int g = 1; g <= s; g++){
        int n, counter;
        scanf("%d", &n);
        counter = n-1;
        printf("Case #%d:\n", g);
        for(int i = 0; i < n; i++){
            int a = 1;
            for(int j = 0; j < n; j++){
                if (a <= counter){
                    printf(" ");
                }else{
                    if ((i+j)%2 == 0){
                        printf("*");
                    }else {
                        printf("#");
                    }
                }
                a++;
            }
            counter--;
            printf("\n");
        }
    }
    return 0;
}