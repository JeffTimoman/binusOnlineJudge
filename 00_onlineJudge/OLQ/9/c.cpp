#include <stdio.h>
#include <math.h>
int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int T;
    fscanf(fp, "%d\n", &T);
    for (int t = 0; t < T; t++){
        int n;
        fscanf(fp, "%d\n", &n);
        int arr[n+1], area, perimeter = 0, size = 2, total = 0;
        for (int i = 0; i < n; i++){
            if (i == n-1)fscanf(fp, "%d\n", &arr[i]);
            else fscanf(fp, "%d ", &arr[i]);
            perimeter -= (arr[i]-1) * 2 * size;
            total += arr[i];
        }
        perimeter += total * 4 * size;
        area = size * size * total;
        // printf("%d", perimeter);
        for (int i = 0; i < n-1; i++){
            int min;
            arr[i] > arr[i+1] ? min = arr[i+1] : min = arr[i];
            perimeter -= size * 2 * min;
        }
        printf("Case #%d: %d %d\n", t+1, perimeter, area);
    }

    pclose(fp);
    return 0;
}