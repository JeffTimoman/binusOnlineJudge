#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++){
		int n;
		long long int search;
		scanf("%d %lld", &n, &search);

		long long int prefix[n+2];
		prefix[0] = 0;
		for (int i = 1; i <= n; i++){
			long long int x;
			scanf("%lld", &x);
			prefix[i] = prefix[i-1] + x;
		}

		int max = -1;
		for (long long int i = n; i >= 1; i--){
			int cp = 0;
			for (long long int j = 1; j <= n-i+1; j++){
				// printf("%d%d ", j, j+i-1);
				if (prefix[j+i-1] - prefix[j-1] <= search){
					if (i > max){
						// printf("%lld %lld\n", prefix[j+i-1] - prefix[j-1], search);
						max = i;
						cp = 1;
						break;
					} 
				}
				if (cp == 1) break;
			}
			// puts("");
		}
		printf("Case #%d: %d\n", t+1, max);
	}
	return 0;
}