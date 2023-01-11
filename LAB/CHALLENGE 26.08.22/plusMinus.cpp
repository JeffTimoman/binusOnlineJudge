    #include <stdio.h>

    int main(){
        int p = 5, n = 3, z = 6;
        int x = 14;
        // scanf("%d", &x);
        
        float res1 = p*1.0/x;
        printf("%.6f\n%.6f\n%.6f\n", res1, (float)(n/x), (float)(z / x));
        return 0;
    }