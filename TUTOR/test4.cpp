#include <stdio.h>
#include <string.h>

int main(){
	char arr1[5][1000] = {"nasigoreng", "nasiayam", "ramen"};
	printf("%d", sizeof(arr1)/(sizeof(arr1[0]) *sizeof(char)));
	return 0;
}
