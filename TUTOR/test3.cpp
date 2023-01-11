#include <stdio.h>
#include <string.h>

int main(){
	char arr1[8][20] = {"nasigoreng", "nasiayam"};
	char key[20] = "nasi";
	printf("%d\n", sizeof(arr1)/sizeof(arr1[0])*sizeof(char));
	if (strcmp(arr1[0], key) == 0){
		printf("Sama");
	}else {
		for (int i = 0; i < 2; i++){
			int counter = 0;
			for (int j = 0; j < strlen(key); j++){
				if (key[j] != arr1[i][j]){
					break;
				}else{
					counter++;
				}
			}	
			if (counter == strlen(key)){
				printf("\'%s\' is in \'%s\'\n", key, arr1[i]);
			}
		}	
	}

	return 0;
}
