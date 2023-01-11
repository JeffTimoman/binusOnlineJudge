#include <stdio.h>

int main(){
	//Gimana kalau mau cek kelipatan 4 dan kelipatan 3.
	
	int x;
	scanf("%d", &x);
	
	if (x % 4 == 0){
		printf("X merupakan kelipatan 4\n");
	}
	
	if (x % 3 == 0){
		printf("X merupakan kelipatan 3\n");
	}
	return 0;
}
