#include <stdio.h>

void function(int n){
	if (n == 0)return;
	function(n-1);
	function(n-2);
}

int main(){
	
	return 0;
}
