#include <stdio.h>

void ubah(int &a){
	a -= 2;
}

int main(){
	int a = 5;
	ubah(a);
//	a -= 2
	printf("%d", a);
	return 0;
}
