#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
//	FILE *fp;
//	fp = fopen("visitor.txt", "r");
//	while (!feof(fp)){
//		char result[1000];
//		int age;
//		char id[7], name[31];
//		fscanf(fp, "%[^#]#%[^#]#%d\n", id, name, &age);
//		printf("%s, %s, %d", id, name, age);
////		printf("%s", result);
//		puts("");
//	}
//	fclose(fp);
	char id[10];
	sprintf(id, "%c%c%c%d%d%d", 'A' + rand() % 26, 'A' + 
		rand() % 26, 'A' + rand() % 26, rand() % 9, rand() % 9, 
		rand() % 9);
		
	printf("%s", id);
	return 0;
}
