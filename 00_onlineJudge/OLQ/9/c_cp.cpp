#include <stdio.h>
#include <math.h>
int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int T;
    fscanf(fp, "%d\n", &T);
    for (int t = 0; t < T; t++){
        int x, y, z, size = 2;
        fscanf(fp, "%d %d %d\n", &x, &y, &z);
        int perimeter = 0, area = (x+y+z)*size*size;

        perimeter += size * 3 * 2; 
        // kiri
        perimeter += size * (x);
        x > y ? perimeter += size * (x-y) : perimeter = perimeter;

        //tengah
        perimeter += size * (y);
        y > z ? perimeter += size * (y-z) : perimeter = perimeter;
        y > x ? perimeter += size * (y-x) : perimeter = perimeter;

        //kanan 
        perimeter += size * (z);
        z > y ? perimeter += size * (z-y) : perimeter = perimeter;
        printf("%d %d\n",perimeter);
    }

    pclose(fp);
    return 0;
}