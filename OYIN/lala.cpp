#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int minimal;
	fscanf(fp, "%d", &minimal);
//	printf("%d\n", minimal);
	int count = 0 ;
	int page = 0 ;
	int cp = 1;
	while(!feof(fp)){
		char word[100000];
		fscanf(fp, "%s", word);
		count++;
		if(word[0] == '#'){
			page++;
			if (count-1 != 0){	
				if(minimal > count-1){
					printf("page %d: %d word(s)\n", page, count-1);
					cp = 0;
				}
			}
			count = 0;
		}
	}
	
	if (cp == 1) puts("The essay is correct\n");
}
