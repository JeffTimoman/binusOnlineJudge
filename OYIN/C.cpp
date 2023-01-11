#include <stdio.h>

int main(){
//	int arr[5] = {1, 2, 3, 4, 5};
	int arr[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 20, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	
	int *x = &arr[2][4];
	*x -= 1;
	printf("X : %d, Arr Posisi : %d\n", *x, arr[2][4]);
	return 0;
}
