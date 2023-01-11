#include <stdio.h>

int fibb(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return fibb(n-1)+fibb(n-2);
	}
}

int fibb2(int a, int b, int c, int n){
	if (n == 1){
		return a;
	} else if (c == n || n == 2){
		return b;
	}else {
		return fibb2(b, a+b, c+1, n);
	}
}

int main(){
	int n = 38;
	printf("%d\n", fibb2(1, 2, 2, n));
//	printf("%d", fibb(n));
	return 0;
}
