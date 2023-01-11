#include<stdio.h>


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
	int kasus;
	int kasus2;
	scanf("%d", &kasus);
	long long int sum[100005] = {};
	long long int arr[100001] = {};
	for(int i = 1 ; i <= kasus; i++){
		scanf("%lld", &arr[i]);
		sum[i] = arr[i] + sum[i-1];
	}
	
	scanf("%d", &kasus2);
	long long int angka[100005] = {};
	for(int i = 1 ; i <= kasus2; i++){
		scanf("%lld", &angka[i]);
		int hasil = binarySearch(sum, 1, kasus, angka[i]);
		printf("Case #%d: %d\n", i, hasil);
	}
	
	return 0;
}
