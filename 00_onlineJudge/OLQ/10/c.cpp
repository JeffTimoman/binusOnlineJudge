#include <stdio.h>
#include <string.h>
int main(){
    int T;
    scanf("%d", &T);getchar();
    for (int t = 0; t < T; t++){
        unsigned long long int n;
        scanf("%llu", &n);getchar();
        int count = 0, binary[10001];
        while (n > 0){
            binary[count] = n % 2;
            n /= 2;
            count++;
        }
        printf("Case #%d: ", t + 1);
        for (int i = count - 1; i >= 0; i--){
            printf("%d", binary[i]);
        }
        puts("");
    }
    return 0;
}