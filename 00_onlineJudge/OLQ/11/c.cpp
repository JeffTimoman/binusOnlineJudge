#include<stdio.h>

// 1 2 3 4 5
// 1 3 6 10 15

int binarySearch(long long int arr[], long long int left, long long int right, long long int search){
	int index = -1, cp = 0;
	long long int selisih;
	while(left <= right){
		int mid = left + (right-left)/2;
		if (arr[mid] <= search){
			if (search - arr[mid] <= selisih || cp == 0){
				cp = 1;
				selisih = search - arr[mid];
				index = mid;
			}
			left = mid + 1;
		}else {
			right = mid - 1;
		}
	}
	return index;
}

int main(){

    int n;
    scanf("%d", &n);
    long long sum[n+1] = {};
    for (int i = 1; i <= n; i++){
        scanf("%lld", &sum[i]);
        sum[i] += sum[i-1];
    }

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++){
        long long int x;
        scanf("%lld", &x);
        printf("Case #%d: %d\n", i+1, binarySearch(sum, 1, n, x));
    }
	
	return 0;
}