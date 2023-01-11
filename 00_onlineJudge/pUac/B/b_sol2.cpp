#include <stdio.h>

FILE *fp, *fp2;

int main(){
    fp = fopen("testdata.in", "r");
    fp2 = fopen("testdata.out", "w");
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n+1];
        int sum = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        sum /= k;
        long long int total = 0; int flag = 0, i = 0;
        for (i = 0; i < n; i++){
            total += arr[i];
            if (total <= sum){
                printf("%d ", arr[i]);
            }else {
                if (flag != k - 1)printf("/ ");
                if (i == n-1) printf("%d", arr[i]);
                else printf("%d ", arr[i]);
                flag++; 
                total = arr[i];
            }
        }
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}