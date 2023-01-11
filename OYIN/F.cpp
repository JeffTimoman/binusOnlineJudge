#include <stdio.h>

int hitung(int a, int b, int c){
	return ((a*b) + c);	
}

int main(){
	int x = 5, y = 3, z = 6;
	printf("%d", hitung(x, y, z));
	return 0;
}
