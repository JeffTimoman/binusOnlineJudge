#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++){
        int nn;
        scanf("%d", &nn);
        int arr[200002] = {};
        int maxScore = 0;
        for (int j = 0; j < nn; j++){
            int x;
            scanf("%d", &x);
            arr[x] += 1;

            if (arr[x] > maxScore){
                maxScore = arr[x];
            }
        }

        printf("Case #%d: %d\n", i, maxScore);
        int counter = 0;
        int result[200002] = {};
        for (int j = 0; j < 200001; j++){
            if (arr[j] == maxScore) {
                result[counter] = j;
                counter++;
            }
        }

        for (int j = 0; j < counter; j++){
            if (j == counter-1) printf("%d\n", result[j]);
            else printf("%d ", result[j]);
        }
    }
    return 0;
}