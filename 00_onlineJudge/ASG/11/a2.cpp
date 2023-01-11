#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long int prefix[n+2];
	prefix[0] = 0;
	for (int i = 0; i < n; i++){
		long long int x;
		scanf("%lld", &x);
		prefix[i+1] = prefix[i] + x;
	}

	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++){
		long long int x;
		scanf("%lld", &x);
		int max = -1;
        for (int i = n; i >= 1; i--){
            for (int j = 1; j <= n-i+1; j++){
                // printf("%d%d ", j, j+i-1);
                if (prefix[j+i-1] - prefix[j-1] <= x){
                    if (i > max) max = i;
                    break;
                }
            }
            // puts("");
        }
		printf("Case #%d: %d\n", t+1, max);
	}

	return 0;
}