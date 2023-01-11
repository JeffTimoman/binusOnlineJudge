#include <stdio.h>

int rekursi(int n){
	//Function yang memanggil dirinya sendiri
	if(n==1){
		return 1;
	}else{
		return n  + rekursi(n-1);
	}
}

int main(){
//	5
//	5 + 4 + 3 + 2 + 1
	int n = 5;
	printf("%d", rekursi(n));
	return 0;
}
