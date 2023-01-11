#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        getchar();
        int input[n+1];
        for (int i = 0; i < n; i++){
            scanf("%d", &input[i]);
        }
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d : ", t+1);
        if (input[a-1] == input[b-1]){
            printf("Draw\n");
        }else if (input[a-1] > input[b-1]){
            printf("Bibi\n");
        }else if(input[b-1] > input[a-1]){
            printf("Lili\n");
        }
    }
    return 0;
}