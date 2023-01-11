#include <stdio.h>

FILE *fp, *fp2;

int main(){
    fp = fopen("testdata.in", "r");
    fp2 = fopen("testdata.out", "w");
    int T;
    fscanf(fp, "%d\n", &T);
    for (int t = 0; t < T; t++){
        int n, k;
        fscanf(fp, "%d %d\n", &n, &k);
        int arr[n+1];
        long long int sum = 0;
        for (int i = 0; i < n; i++){
            fscanf(fp, "%d", &arr[i]);
            sum += arr[i];
        }
        sum /= k;
        long long int total = 0; int flag = 0, i = 0;
        for (i = 0; i < n; i++){
            total += arr[i];
            if (total <= sum){
                fprintf(fp2, "%d ", arr[i]);
            }else {
                if (flag != k - 1)fprintf(fp2, "/ ");
                fprintf(fp2, "%d ", arr[i]);
                flag++; 
                total = arr[i];
            }
        }
        fprintf(fp2, "\n");
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}