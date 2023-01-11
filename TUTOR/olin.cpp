#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int input[n+1];
	int odd[n+1], counter_odd = 0;
	long long int sum = 0;
	for (int i = 0; i < n; i++){
		scanf("%d", &input[i]);
		sum += input[i];
		if (input[i] % 2 != 0){
			odd[counter_odd] = input[i];
			counter_odd++;
		}
	}
	if (sum % 2 == 0){
		printf("%lld\n", sum);
	}else {
		long long int odd_sum = 0;
		for (int i = 0; i < counter_odd; i++){
			if (sum - odd[i] > odd_sum)odd_sum = sum - odd[i];
		}
		printf("%lld\n", odd_sum);
	}
	return 0;
}
