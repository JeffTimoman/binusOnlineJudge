#include <stdio.h>

//Kedua --> Function itu bisa nyimpen parameter
int tambah(int a, int b){
	return a + b;
}
int c = 0;
void tambah2(int a, int b){
	c = a + b;
}

int main(){
//	int x = 30;
//	int x;
	int x = tambah(5, 6);
	tambah2(5, 6);
	printf("%d\n", c);
	printf("%d", x);
	return 0;
}
