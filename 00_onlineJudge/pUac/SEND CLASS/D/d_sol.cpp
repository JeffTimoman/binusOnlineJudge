#include <stdio.h>


int read[1000001] = {};
int arr[2000001];
int main(){

    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        int n, f;
        scanf("%d %d", &n, &f);
        for (int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            arr[x] = 1;
            read[i] = x;
        }
        int counter = 0;
        for (int i = 0; i < n; i++){
            long long int x = f - read[i];
            if (x <= 0) continue;
            if (arr[x] == 1 && arr[read[i]] == 1){
                counter++;
                arr[x] = 0;
                arr[read[i]] = 0;
            }
        }
        printf("Case #%d: %d\n", t+1, counter);
        // reset arr and read array
        for (int i = 0; i < n; i++){
            arr[read[i]] = 0;
            read[i] = 0;
        }
    }
    return 0;
}