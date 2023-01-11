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
		for (int i = 0; i < n; i++){
			for (int j = n; j >= i+1; j--){
				if (prefix[j] - prefix[i] <= x){
					if (j-i > max) max = j-i;
					break;
				}
			}
		}
		printf("Case #%d: %d\n", t+1, max);
	}

	return 0;
}