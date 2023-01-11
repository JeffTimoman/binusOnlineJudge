#include <stdio.h>
#include <math.h>
int main(){
    double s;
    double red, black;
    scanf("%lf %lf %lf",&s, &red, &black);
    int count = 1;
    while ((black + red) < s * s * 100.0){
        printf("%d : B : %.2lf R : %.2lf\n", count, black, red);
        black = black *3.0;
        red = red * 2.0;
        if (count % 3 == 0 && count != 0) black = black / 5.0;
        if (count % 4 == 0 && count != 0) red = (red * 2.0) / 3.0;
        black = ceil(black);
        red = ceil(red);
        count++;
    }

    printf("Count : %d, Black : %lf, red: %lf", count-1, red, black);
    printf("\n%lf\n", black-red);
    return 0;
}