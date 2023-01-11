#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int currIndex = 0;
FILE *fp;
struct data{
	int age;
	char id[7];
	char name[31];
}datas[100000];

//Struct Function 
void addData(char id[], char name[], int age){
	datas[currIndex].age = age;
	strcpy(datas[currIndex].id, id);
	strcpy(datas[currIndex].name, name);
	currIndex++;
}


//Sorting
void merge(int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	data L[n1], R[n2];
	for (int i = 0; i < n1; i++){
		L[i] = datas[left + i];
	}
	for (int i = 0; i < n1; i++){
		R[i] = datas[mid+i+1];
	}
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2){
		if (strcmp(L[i].id, R[i].id) < 0){
			datas[k++] = L[i++];
		}else{
			datas[k++] = R[j++];
		}
	}
	
	while (i < n1){
		datas[k++] = L[i++];
	}
	
	while (j < n2){
		datas[k++] = R[j++];
	}
}
void mergeSort(int left, int right){
	if (left < right){
		int mid = left + (right-left)/2;
		mergeSort(left, mid);
		mergeSort(mid+1, right);
		merge(left, mid, right);
	}
}

//File Processing
void readFile(){
	fp = fopen("visitor.txt", "r");
	while (!feof(fp)){
		int age;
		char id[7], name[31];
		fscanf(fp, "%[^#]#%[^#]#%d\n", id, name, &age);
		datas[currIndex].age = age;
		strcpy(datas[currIndex].name, name);
		strcpy(datas[currIndex].id, id);
		currIndex++;
	}
	fclose(fp);
}
void saveFile(){
	fp = fopen("visitor.txt", "w");
	for (int i = 0; i < currIndex; i++){
		fprintf(fp, "%s#%s#%d\n", datas[i].id, datas[i].name, datas[i].age);
	}
	fclose(fp);
}

//Validation
bool validateName(char name[]){
	int len = strlen(name);
	if (len > 30 || len < 5){
		return false;
	}
	
	return true;
}
bool validateAge(int age){
	if (age < 18 || age > 50){
		return false;
	}
	return true;
}

//Basic Function
void printMenu(){
	puts("- Visitor Menu -");
	puts("1. Add Visitor");
	puts("2. View All Visitor");
	puts("3. Update Visitor");
	puts("4. Delete Visitor");
	puts("5. Save and Exit");
	printf(">> ");
}
void pressToContinue(){
	printf("Press to continue. . . ");
	getchar();
}

//Switch Case Function
void viewVisitor(){
	puts("=======================================================");
	printf("| %-8s | %-30s | %-4s |\n", "ID", "Name", "Age");
	for (int i = 0; i < currIndex; i++){
		printf("| %-8s | %-30s | %-4d |\n", datas[i].id, datas[i].name, datas[i].age);
	}
	
}
void addVisitor(){
	char name[31];
	do{
		printf("Name[5..30] : ");
		scanf("%[^\n]", name); getchar();
	}while(!validateName(name));
	
	int age;
	do{
		printf("Age[18..50] : ");
		scanf("%d", &age); getchar();
	}while(!validateAge(age));
	
	char id[7];
	sprintf(id, "%c%c%c%d%d%d", 'A' + rand() % 26, 'A' + 
		rand() % 26, 'A' + rand() % 26, rand() % 9, rand() % 9, 
		rand() % 9);
	addData(id, name, age);
}

int main(){
	srand(time(NULL));
	int menu;
	readFile();
	do {
		mergeSort(0, currIndex-1);
		system("cls");
		printMenu();
		scanf("%d", &menu); getchar();
		switch(menu){
			case 1:
				puts("Add Visitor");
				addVisitor();
				pressToContinue();
				break;
			case 2:
				puts("View All Visitor");
				viewVisitor();
				pressToContinue();
				break;
			case 3:
				puts("Update Visitor");
				pressToContinue();
				break;
			case 4:
				puts("Delete Visitor");
				pressToContinue();
				break;
			case 5:
				printf("Thank you for using this app\n");
				saveFile();
				pressToContinue();
				break;
			default:
				printf("Option is not valid, try again");
				pressToContinue();
				break;
		}
	}while(menu != 5);
	return 0;
}
