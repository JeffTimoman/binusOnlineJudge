#include <stdio.h>

void fixSum(long long int *arr, int n, long long int *prefixSum){
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int binarySearch(long long int *arr,int n,long long int k){
    int l=0,r=n,m;
    while(l<r){
        m=(l+r)/2;
        if(k<=arr[m]) r=m;
        else l=m+1;
    }
    if(arr[l]==k) l++;
    return l;
}

int main (){
	int n;
	scanf("%d", &n);
	long long int arr[n+1]={};
	long long int arrb[n+1]={};
	for (int i=0; i<n; i++){
		scanf("%lld", &arr[i]);
	}
	fixSum(arr,n,arrb);
	int x;
	scanf("%d", &x);
	
	for (int i=0; i<x; i++){
		long long int y;
		scanf("%lld", &y);
		int hasil;
		
		if (y<arrb[0]) hasil = -1;
		else hasil = binarySearch(arrb,n,y);
		
		printf("Case #%d: %d\n",i+1, hasil);
	}
	return 0;
}