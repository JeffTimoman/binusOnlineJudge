#include <stdio.h>

int main(){
	//If, Else if, else
	//Pilihan 1, Pilihan 2, Pilihan Terakhir.
	
	//if (true) --> jalan
	//else if(true) --> jalan.
	
	int x;
	scanf("%d", &x);
	
	//If Else if dan Else, dijalandkan dari atas ke bawah.	
	if (x > 10){
		//Cek syarat 1, tidak terpenuhi, cek syarat 2.
		printf("Nilai x lebih dari 10");
	}else if (x > 0){
		//Cek syarat ke 2, tidak terpenuhi, syarat 3.
		printf("Nilai x diantara 0 dan 10");
	}else if (x == 0){
		printf("Nilai x adalah 0");
	}else{
		//Mau tak mau kalo syarat di atas tidak terpenuhi, wajib dijalankan.
		printf("Nilai x kurang dari 0");
	}
	return 0;
}
