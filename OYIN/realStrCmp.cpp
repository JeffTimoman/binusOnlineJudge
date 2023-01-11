#include <stdio.h>
#include <string.h>

int realCmp(char s1[], char s2[]){
	int n1 = strlen(s1), n2 = strlen(s2);
	int i = 0, j = 0;
	while(i < n1 && j < n2){
		if (s1[i] > s2[j]){
			return 1;
		}
		
		if (s1[i] < s2[j]) return -1;
		i++; j++;
	}
	return 0;
}

int main(){
	char str[] = "michello", str1[] = "michelline";
	int result = realCmp(str, str1);
	printf("%d", result);
	return 0;
}
