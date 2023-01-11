#include<stdio.h>
#include<string.h>

int main(){
	// pertama-tama masukin berapa banyak kasus
	// lalu masukan angka yang menunjukan seberapa banyak pemunduran huruf yang terjadi
	// pertama tama, ubah dulu angka angka ke huruf
	// lalu pas semua udah jadi alphabet, lalu ubah semua huruf menjadi ascii 
	// lalu ascii - 1 kalo perubahannya 1, ascii - 13 kalo 13 kali perubahan
	
	int kasus;
	int ascii;
	char kata[10000];
	int panjang;
	int perubahan;
	char arr1[1000] = "OIEASGTB";
	char arr2[1000] = "01345678";
	scanf("%d", &kasus); getchar();
	for(int i=0; i<kasus; i++){
		scanf("%d", &perubahan); getchar();
		scanf("%[^\n]", kata); getchar();
		panjang = strlen(kata);
		for(int j =0; j<panjang;j++){
			for(int k =0; k<panjang;k++){
				if(kata[j] == arr2[k]){
					kata[j] = arr1[k];
				}
			}
		}
		for(int j=0;j<panjang;j++){
			kata[j] = kata[j]-perubahan;
		}
		printf("Case #%d: %s", i+1, kata[i]);
	}
	return 0;
}