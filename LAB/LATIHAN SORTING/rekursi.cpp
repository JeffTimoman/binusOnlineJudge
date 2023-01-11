#include <stdio.h>


int fpb(int a, int b){
	if (b == 0) return a;
	else return fpb(b, a%b);
}

int main(){
//	int n;
//	scanf("%d", &n);
//	
//	int kpk = 1;
//	while(n--){
//		int x;
//		scanf("%d", &x);
//		kpk = (kpk * x)/fpb(kpk, x);
//	}
//	printf("%d", kpk);

	int a, b;
	scanf("%d %d", &a, &b);
	if (b > a){
		int temp = a;
		a = b;
		b = a;
	}	
	int kpk = (a * b)/ fpb (b, a);
	printf("%d", kpk);
	return 0;
}
