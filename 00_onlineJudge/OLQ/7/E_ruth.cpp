#include <stdio.h>
#include <string.h>
int main(){
	int n = 0, panjangkata = 0;
	char pengganti[6] = "AEIOU";
	int angka[1005] = {};
	scanf("%d", &n);
	for(int a = 0; a < n; a++){
		char kata[1005], final[1005];
		scanf("%s", kata);
		getchar();
		panjangkata = strlen(kata);
		for(int i = 0; i < panjangkata; i++){
			if(kata[i] >= 65 && kata[i] <= 68){
				final[i] = pengganti[0];
			} if(kata[i] >= 69 && kata[i] <= 72){
				final[i] = pengganti[1];
			} if(kata[i] >= 73 && kata[i] <= 78){
				final[i] = pengganti[2];
			} if(kata[i] >= 79 && kata[i] <= 84){
				final[i] = pengganti[3];
			} if(kata[i] >= 85 && kata[i] <= 90){
				final[i] = pengganti[4];
			}
		}
		
		printf("Case #%d:\n", a+1);
		printf("%s\n", final);
		
		for(int b = 0; b < panjangkata; b++){
			angka[b] = kata[b] - final[b];
			printf("%d", angka[b]);
		}
		printf("\n");
	}
	return 0;
}
