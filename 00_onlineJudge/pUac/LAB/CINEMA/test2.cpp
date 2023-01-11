#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Input : ");
	while(true){
		char x;
		scanf("%c", &x);
		if(x == '\n'){
			printf("Input : ");
			continue;
		}
		if (x != '\n'){
			str[0] = x;
			break;
		}
	}
	char temp[100];
	scanf("%[^\n]", temp);
	strcat(str, temp);
	printf("%s", str);
	return 0;
}
