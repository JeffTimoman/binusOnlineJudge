#include <stdio.h>

int rev(int a, int b, int n, int angka){
	if (angka == a || angka == b){
		return n;
	}else if(b > angka){
		return -1;
	}else {
		return rev(b, a+b, n+1, angka);
	}
}

int main(){
	printf("%d\n", rev(1, 1, 1, 63245986));
	return 0;
}
