#include <stdio.h>
int count(int x, int y){
	if (y == 0) {
		return x;
	}
	else {
		return count(y, x%y);
	}
}

//A function to count greatest common divisor with reccursion logic
int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("GCD of %d and %d is %d", x, y, count(x, y));
    return 0;
}

int main(){

	int n, result;
	result = 1;
	scanf("%d", &n);
	for(int i = 0 ; i < n; i++){
		int data;
		scanf("%d", &data);
		result = (result * data) / count(data, result);
	}

	printf("%d", result);
	
	return 0;
}
//Result = 1
//result * data = 1 * 2 = 2
//Awal : result = 1; Setelah = 1 * 2
//count(data, result)
//(2 * 1) / count(2, 1)
//count(2,1) --> count (1, 2 % 1) --> count (1, 0) --> return 1
// result = (1 * 2)/1
// result baru = 2.
// result = (2 * 3)/count(3, 2)
// count(3, 2) --> count(2, 3 % 2) --> count(2, 1) --> count(1, 2 % 1) --> count(1, 0) --> return 1
// result = (2 * 3)/1
// result baru = 6
// result = (6 * 4)/count(4, 6)
// count(4, 6) --> count(6, 4 % 6) --> count(6, 4) --> count(4, 6 % 4) --> count(4, 2) --> count(2, 4 % 2) --> count(2, 0) --> return 2



