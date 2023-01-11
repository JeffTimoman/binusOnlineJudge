#include <stdio.h>
#include <string.h>
int main(){
	int a = 0, n = 0, b = 0, jumlahstring = 0, jumlah = 0;
	char huruf[1005] = {}, hasil[1005] = {};
	scanf("%d", &n);
	for(int a  = 0; a < n; a++){
		scanf("%s", &huruf);
		jumlahstring = strlen(huruf);
		printf("Case #%d : ", a+1); 
		jumlah = jumlahstring - 1;
		for (b = 0; b < jumlahstring; b++){
		    hasil[b] = huruf[jumlah];
		    jumlah--;
		}
		printf("%s\n", hasil);
		jumlahstring = 0;
	}
	return 0;
}
