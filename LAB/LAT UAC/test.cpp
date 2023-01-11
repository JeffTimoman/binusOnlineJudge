#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	for (int t=0; t < T;t++){
		long long int n, k;
		scanf("%d %d", &n, &k);
		long long int total = 0;
		long long int arr[n+1], flag = 0;
		for (int i = 0; i < n; i++){
			scanf("%lld", &arr[i]);
			total += arr[i];
		}
		total /= 3;
		long long int sum = 0;
		for (int i = 0; i < n; i++){
			sum += arr[i];
			if (sum <= total){
			}else{
				if(flag != k-1) printf("/ ");
				flag++;
				sum = arr[i];
			}
			printf("%lld ", arr[i]);
		}
		puts("");
	}
	return 0;
}
