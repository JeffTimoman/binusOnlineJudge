#include<stdio.h>
#include<stdlib.h>

int flood(char arr[200][200], int X, int Y){
	if(arr[X][Y] == '.'){
		arr[X][Y] = '#';
		return 1 + flood(arr, X+1, Y) + flood(arr, X-1, Y)+
		flood(arr, X, Y+1) + flood(arr, X, Y-1);
	}else if(arr[X][Y] == 'S'){
		arr[X][Y] = '#';
		return 0 + flood(arr, X+1, Y) + flood(arr, X-1, Y)+
		flood(arr, X, Y+1) + flood(arr, X, Y-1);
	}else{
		return 0;
	}
}
int main(){
	int kasus;
	scanf("%d", &kasus); getchar();
	for(int i = 0; i < kasus; i++){
        int baris, kolom, posX, posY;
		char simbol[200][200]= {};
		scanf("%d %d", &baris, &kolom);getchar();
		for(int j=0;j<baris; j++){
			for(int k=0;k<kolom; k++){
				scanf("%c", &simbol[j][k]); 
				if(simbol[j][k] == 'S'){
					posX = j;
					posY = k;
				}
			}
			getchar();
		}
		printf("Case #%d: %d\n", i+1, flood(simbol, posX, posY));
	}
	return 0;
}