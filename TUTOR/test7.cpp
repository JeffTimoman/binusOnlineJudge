#include <stdio.h>

void ubahX(int &x){
	x = 10;
}

int main(){
	int x = 5;
	ubahX(x);
	printf("%d", x);
	return 0;
}
