#include <stdio.h>
int fibbo(int x){
	if(x == 0 || x == 1){
		return 1;
	}else{
		return fibbo(x-1) + fibbo(x-2);
	}
}

int main(){
	int angka = 63245986;
	int n = 1;
	int hasil = fibbo(n);
	while(angka >= hasil){
		if (hasil == angka) {
			printf("%d", n);
			break;	
		}
		else {
			n++;
			hasil = fibbo(n);
		}
	}
	return 0;
}
