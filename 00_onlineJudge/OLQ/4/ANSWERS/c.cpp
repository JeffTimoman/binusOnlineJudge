#include <stdio.h>

int main(){
    int n;
    int view[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &view[i]);
    }
    int length;
    int counter = 1;
    scanf("%d", &length);
    for(int i = 0; i < length; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int result = 0;
        for(int j = a; j <= b; j++){
            result += view[j-1];
        }
        printf("Case #%d: %d\n", counter, result);
        counter++;
    }
    return 0;
}