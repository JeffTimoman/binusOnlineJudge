#include<stdio.h>
#include<stdlib.h>

int flood(char arr[200][200], int posisiX, int posisiY){
	if(arr[posisiX][posisiY] == '.'){
		arr[posisiX][posisiY] = '#';
		return 1 + flood(arr, posisiX+1, posisiY) + flood(arr, posisiX-1, posisiY)+
		flood(arr, posisiX, posisiY+1) + flood(arr, posisiX, posisiY-1);
	}else if(arr[posisiX][posisiY] == 'S'){
		arr[posisiX][posisiY] = '#';
		return 0 + flood(arr, posisiX+1, posisiY) + flood(arr, posisiX-1, posisiY)+
		flood(arr, posisiX, posisiY+1) + flood(arr, posisiX, posisiY-1);
	}else{
		return 0;
	}
}

int main(){
	int kasus;
	scanf("%d", &kasus);getchar();
	for(int i = 0; i < kasus; i++){
        int baris, kolom;
        int posisiX, posisiY;
		char simbol[200][200]= {};
		scanf("%d %d", &baris, &kolom);getchar();
		for(int j=0;j<baris; j++){
			for(int k=0;k<kolom; k++){
				scanf("%c", &simbol[j][k]); 
				if(simbol[j][k] == 'S'){
					posisiX = j;
					posisiY = k;
				}
			}
			getchar();
		}
		printf("Case #%d: %d\n", i+1, flood(simbol, posisiX, posisiY));
	}
	return 0;
}