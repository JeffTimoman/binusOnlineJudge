#include <stdio.h>
#include <string.h>
int main(){
	int a = 0, n = 0, b = 0, jumlahstring = 0, jumlah = 0;
	char huruf[1005] = {}, hasil[1005] = {};
	scanf("%d", &n);
	for(int a  = 0; a < n; a++){
		scanf("%s", huruf);
		jumlahstring = strlen(huruf);
		jumlah = jumlahstring - 1;
		for (b = 0; b < jumlahstring; b++){
		    hasil[b] = huruf[jumlah];
		    jumlah--;
		}
		printf("Case %d: ", a+1); 
		for (b = 0; b < jumlahstring; b++){
			if(b == jumlahstring-1){
				printf("%d\n", hasil[b] % 2);
			} else{
				printf("%d", hasil[b] % 2);
			}
		}
		jumlahstring = 0, jumlah = 0;
	}
	return 0;
}
