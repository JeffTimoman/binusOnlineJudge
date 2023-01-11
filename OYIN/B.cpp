#include <stdio.h>
#include <string.h>

int main(){
	int var = 30;
	int *ptr = &var;
	printf("%d\n", &var);
	printf("%d", *ptr);
	return 0;
}
