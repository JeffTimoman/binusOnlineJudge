#include <stdio.h>
int main(){
	int n = 0, a = 0, b = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a);
			if(a < 1 || a > n){
				b = b + 1;
			}
		}
	}
	printf("%d\n", b);
	return 0;
}
