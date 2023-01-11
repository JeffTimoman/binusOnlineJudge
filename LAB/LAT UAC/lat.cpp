#include <stdio.h>
#include <string.h>
int currIndex = 0;

struct Students{
	char NIM[15];
	char name[40];
	int age;
}students[1001];

//Before Run
void innit(){
	strcpy(students[currIndex].name, "jefferson");
	students[currIndex].age = 16;
	strcpy(students[currIndex].NIM, "2602189480");
	currIndex++;
	strcpy(students[currIndex].name, "agustinus");
	students[currIndex].age = 18;
	strcpy(students[currIndex].NIM, "2602189482");
	currIndex++;
	strcpy(students[currIndex].name, "angkianto");
	students[currIndex].age = 19;
	strcpy(students[currIndex].NIM, "2602189483");
	currIndex++;
	strcpy(students[currIndex].name, "caroline");
	students[currIndex].age = 17;
	strcpy(students[currIndex].NIM, "2602189481");
	currIndex++;
	strcpy(students[currIndex].name, "valina");
	students[currIndex].age = 16;
	strcpy(students[currIndex].NIM, "2602189485");
	currIndex++;
}
void printData(){
	
	puts("=================================================");
	printf("| %-15s | %-20s | %-4s |\n", "NIM", "Name", "Age");
	for (int i = 0; i < currIndex; i++){
		printf("| %-15s | %-20s | %-4d |\n", students[i].NIM, students[i].name, 
		students[i].age);
	}
	puts("=================================================");
}

//Sorting 
void merge(int left,int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
}

void mergeSort(int left, int right){
	if (left < right){
		int mid = left + (right-left)/2;
		mergeSort(left, mid);
		mergeSort(mid+1, right);
		merge(left, mid, right);
	}
}

int main(){
	innit();
	printData();
	return 0;
}
