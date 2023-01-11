#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++){
        int odd = 0, even = 0, counter = 1;
        char x;
        scanf("%c", &x);
        while (x != '\n' && x != ' '){
            if (counter % 2 == 0) even += x - '0';
            else odd += x - '0';
            counter++;
            scanf("%c", &x);
        }
        // printf("%d %d\n", odd, even);
        if ((odd - even) % 11 == 0) printf("Case #%d: Yeah\n", i+1);
        else printf("Case #%d: Nah\n", i+1);
    }
    
    return 0;
}