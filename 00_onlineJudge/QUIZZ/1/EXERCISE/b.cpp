#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        printf("Case #%d:\n", t+1);
        for (int i = 0; i < n; i++){
            int counter = i+1;
            if ((counter % 3 == 0 || counter % 5 == 0) && counter % 15 != 0){
                printf("%d Jojo\n", counter);
            }else{
                printf("%d Lili\n", counter);
            }
        }
    }
    return 0;
}