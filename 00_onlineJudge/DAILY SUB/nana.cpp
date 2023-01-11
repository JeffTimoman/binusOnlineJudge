#include<stdio.h>
#include<string.h>
#include<math.h>
int simpan[1000][1000] = {};
int main(){
	int row, column, L=0;
	char s[200];
	char S[200];
	
	scanf("%[^\n]", s);
	int panjang = strlen(s);
	int tanda = -1;
	for(int i = 0 ; i < panjang ; i++){
		if(s[i] != ' '){
			tanda++;
			S[tanda] = s[i];
			//L++;
		}
	}
	
	panjang = strlen(S);
	row = floor(sqrt(panjang));
	column = ceil(sqrt(panjang));
	//printf("%d %d", row, column);
//	for(int i = 0 ; i < panjang ; i++){
//		printf("%c", S[i]);
//	}
//	puts("");
	int trow = row;
	int tcolumn = column;
	if(row*column < panjang){
		row++;
	}
	tanda = -1;
	for(int i = 1 ; i <= row ; i++){
		for(int j = 1 ; j <= column ; j++){
			tanda++;
			//A[i][j] = s[tanda];
			simpan[i][j] = S[tanda];
			//printf("%c", S[tanda]);
		}
	//	puts("");
	}
	
//	for(int i = 1 ; i <= row ; i++){
//		for(int j = 1 ; j <= column ; j++){
//			//A[i][j] = s[tanda];
//			printf("%c", simpan[i][j]);
//		}
//		puts("");
//	}
	
	for(int i = 1 ; i <= column ; i++){
		for(int j = 1 ; j <= row ; j++){
			//A[i][j] = s[tanda];
			if(simpan[j][i] >= 97 && simpan[i][j] <= 120){
				printf("%c", simpan[j][i]);
			}
		}
		if(i != tcolumn){
		printf(" ");
		}
	}
	
	return 0;
}