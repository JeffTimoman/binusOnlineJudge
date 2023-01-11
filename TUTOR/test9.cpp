#include <stdio.h>
#include <math.h>
int main(){
	int x = 7;
	
	int x_akar = sqrt(x);
	printf("x_akar : %d\n", x_akar); 
	int hasil;
	if(fmod(x/2, 2) == 0){
		hasil = (x/2);
	}else if (x_akar * x_akar < x){
		hasil = (x/2) + 1;
	}else {
		hasil = (x/2);
	}
	printf("Hasil : %d", hasil);
	return 0;
}
